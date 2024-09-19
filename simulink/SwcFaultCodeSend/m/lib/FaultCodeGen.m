function [signal] = FaultCodeGen(Fault,timeserise,fre,time)


  if(~exist('time','var'))
        time = 15;  % 如果未出现该变量，则对其进行赋值
  end
  if(~exist('fre','var'))
        fre = 100;  % 如果未出现该变量，则对其进行赋值
  end
  signal = [];
       for i = 1:length(timeserise)-1
           if mod(i,2)
                out = zeros(uint16((timeserise(i+1)-timeserise(i))*fre),1);
           else
                out = ones(uint16((timeserise(i+1)-timeserise(i))*fre),1);
           end
            signal = [signal;out];
       end
     out = zeros(uint16(100*time+1 -  100*timeserise(end)),1);
    signal = [signal;out]*Fault;
end

