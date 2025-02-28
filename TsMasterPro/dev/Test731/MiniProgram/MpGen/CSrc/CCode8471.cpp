﻿// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN Timer NewTimer1 MTA_
// 定时器文档 "NewTimer1"
TMPTimerMS NewTimer1;
// CODE BLOCK END Timer NewTimer1

// CODE BLOCK BEGIN On_Timer NewOn_Timer1 TmV3VGltZXIx
// 定时器触发事件 "NewOn_Timer1" for Timer NewTimer1
void on_timer_NewOn_Timer1(void) { try { // 定时器 = NewTimer1
TCAN c;
s32 i;
c
c = varCAN1.get();
i = *(ps32)(&c.FData[0]);
i++;
if(i == 16){i = 0;}
*(ps32)(&c.FData[0]) = i;
c.FData[7] =  c.FData[0]^c.FData[1]^c.FData[2]^c.FData[3]^c.FData[4]^c.FData[5]^c.FData[6];
varCAN1.set(c);
com.transmit_can_async(&c);
} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Timer NewOn_Timer1

// CODE BLOCK BEGIN Step_Function  NQ__
// 主step函数，执行周期 5 ms
void step(void) { try { // 周期 = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

