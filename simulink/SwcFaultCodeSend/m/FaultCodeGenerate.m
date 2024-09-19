
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
