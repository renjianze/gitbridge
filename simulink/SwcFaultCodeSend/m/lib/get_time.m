function [time_out] = get_time(t,fre)
%GET_TIME 此处显示有关此函数的摘要
%这个函数产生时间序列
    tt = 1/(fre*1000);
    time_out = 0:tt :t;
    time_out= time_out';

end

