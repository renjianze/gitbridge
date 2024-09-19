错误码发送模块的具体实现；



# FaultCodeSend

## 模块功能

能够根据需求发送错误代码；

- [x] 能够根据错误发送对应的错误代码；
- [x] 每个错误码只对应一个错误，有为1，没有为0；
- [x] 错误码的采样时间为10 $\text{ms}$，错误码的发送周期为1 $\text{s}$；
- [x] 所有错误码都会被记录，只有被发送后才会被清除；
- [x] 错误码存放在缓存区`Temp`中，缓存区的大小为错误码的数量；
- [x] 一旦发生错误，就会将该错误写到错误缓存区`Temp`中对应的位置；
- [x] 错误发送顺序优先级为当前错误发送指针指向的位置，依次查询；
- [x] 错误码的数据类型暂定为`uint8`,最多存放255种错误。

## 举例

假设有n个错误码，那么错误缓存区为`Temp[n]`;

`FaultCodeSend`分为两个部分分别为`写错误`和`发送错误`

### 写错误码

<img src="fig\FaultCode1.png\" width=900 title=我是傻逼> </img>

- 错误码的写入周期为10 $\text{ms}$；

- 发生错误时写入缓存区`Temp`

- 如果`WriteEnableFlag==1`也可以写入缓存区，写入后置==0==；

### 发送错误码

- 发送错误码的周期为1$\text{s}$；

- 错误的发送按自然顺序发送；

- ` SendEableFlag`使能时开始发送错误；

- 指针`CannumPointer`在当前位置向前移动一个单位，直到移动到错误位；
- 发送错误，`WriteEnableFlag`置==1==；



<img src="fig\FaultCode2.png\" width=900 title=我是傻逼> </img>

错误的发送按自然顺序发送，指针`CannumPointer`在接受到`SendEableFlag`使能时，依次寻找错误，在寻找到错误之后立刻发送。

## 使能信号

每隔100个周期使能一次，表示需要发送错误码。

错误使能模块

<img src="fig\C2.png\" width=600 title=我是傻逼> </img>

设置参数`100 Hz`使能时间`1000 ms`;

<img src="fig\C1.png\" width=400 title=我是傻逼> </img>

## 接口

 **input**

| Input              | DataType    | Unit | 备注                   |
| ------------------ | ----------- | ---- | ---------------------- |
| `Faults`           | n*1 `uint8` | -    | 所有会产生错误的错误码 |
| `SendEnableFlag1s` | `boolean`   |      | 1s 发送使能信号        |
| `PreFaultCode`     | `uint8`     |      | 上一个错误码           |

**output**

| output         | DataType | Unit | 备注                 |
| -------------- | -------- | ---- | -------------------- |
| `PreFaultCode` | `uint8`  |      | 当前时刻发送的错误码 |





**错误发送边界：**

- [x] 第$1$ $\text{s}$不发送错误；

- [x] 发送使能的边界 $0.99s$、 $1.99s$、$2.99s$;

- [x] 在边界结束的错误，会被保存到下一时刻；（与第四条相同）

- [x] 发送期间产生的错误，会被下一次发送；

- [x] 发送使能时刻产生的错误且能够发送会被立刻发送，如果持续出现还会被保存到下一刻发送。（至少被发送两次)

- [x] 所有的错误发生时，最长在n秒内都会报一次。

  **测试序列**

```matlab
%% 每一个时刻均为下一个状态的起始点
t = get_time(15,0.1); %% 时间序列
Fault =[1 2 3 4 5 6];

timeserise0x01 = [0 1.4 2.3];  
timeserise0x02 = [0 0.3 0.6 2.3 3.8 6.3 8.7];   
timeserise0x03 = [0 0 1.0  2.0 3.9 4.4 4.5 7.0 8.8];   
timeserise0x04 = [0 6.2 6.6 10.5 10.8];   
timeserise0x05 = [0 8.1 8.4 9.3 10.5];   
timeserise0x06 = [0 6.5 7.3];   
%% 测试序列
Fault0x01 = FaultCodeGen(1,timeserise0x01);
Fault0x02 = FaultCodeGen(2,timeserise0x02);
Fault0x03 = FaultCodeGen(3,timeserise0x03);
Fault0x04 = FaultCodeGen(4,timeserise0x04);
Fault0x05 = FaultCodeGen(5,timeserise0x05);
Fault0x06 = FaultCodeGen(6,timeserise0x06);
```

<img src="fig\发送错误码.png\" width=600 title=我是傻逼> </img>

## 部分代码

```matlab
function FaultCode = fcn(x,SendEnableFlag1s,y1)

%% 赋初值
persistent Temp
persistent cannum
persistent WriteEnableFlag 

    if isempty(cannum)
        cannum = 0;
    end

    if isempty(WriteEnableFlag)
        WriteEnableFlag = zeros(length(x),1);
    end

%% 更新缓存区
     if isempty(Temp)
         Temp = x; % 在外面数组赋值不好赋值了
     else
       for i = 1:length(x)
           if x(i) > Temp(i)   
               Temp(i) = x(i);
           elseif   WriteEnableFlag(i) == 1
               Temp(i) = x(i);
               WriteEnableFlag(i) =0;
           end
       end
     end
  
%% 确认发送的错误
if SendEnableFlag1s == 1
    if all(Temp == 0)
            FaultCode = uint8(0);
    else
            for i = 1:length(Temp)
                %=============================
                    cannum = cannum + 1;
                    if cannum > length(Temp)
                        cannum = 1;
                    end
                    if Temp(cannum) ~= 0
                        FaultCode = uint8(Temp(cannum));
                        WriteEnableFlag(cannum) = 1;
                        break
                    else                %%确认赋值，matlab function的问题
                        FaultCode = uint8(0);
                    end
            end 
                %=============================
    end
else
    FaultCode = uint8(y1);
end
validateattributes(FaultCode, {'uint8'}, {}); 

end
```

