// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN Variable varCAN1 Myx7MCwweDEsODk5OURRb18_
// 变量文档 "varCAN1"
TMPVarCAN varCAN1;
// CODE BLOCK END Variable varCAN1

// CODE BLOCK BEGIN Timer NewTimer1 MTA_
// 定时器文档 "NewTimer1"
TMPTimerMS NewTimer1;
// CODE BLOCK END Timer NewTimer1

// CODE BLOCK BEGIN On_Timer NewOn_Timer1 TmV3VGltZXIx
// 定时器触发事件 "NewOn_Timer1" for Timer NewTimer1
void on_timer_NewOn_Timer1(void) { try { // 定时器 = NewTimer1
TCAN c;
s32 i;

c = varCAN1.get();  
i = *(ps32)(&c.FData[0]);
i++;
if(i == 16){i = 0;}
*(ps32)(&c.FData[0]) = i;
 c.FData[0] =  c.FData[1]^c.FData[2]^c.FData[3]^c.FData[4]^c.FData[5]^c.FData[6]^c.FData[7];
// // c.FData[0] =15;
 varCAN1.set(c);
 com.transmit_can_async(&c);       
 
} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Timer NewOn_Timer1

// CODE BLOCK BEGIN On_Start NewOn_Start1
// 启动事件 "NewOn_Start1"
void on_start_NewOn_Start1(void) { try { // 程序启动事件
TCAN c;
c.init_w_std_id(0xf8, 8);
varCAN1.set(c);
NewTimer1.start();

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start NewOn_Start1

// CODE BLOCK BEGIN On_Stop NewOn_Stop1
// 停止事件 "NewOn_Stop1"
void on_stop_NewOn_Stop1(void) { try { // 程序停止事件
  NewTimer1.stop();

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Stop NewOn_Stop1

// CODE BLOCK BEGIN Step_Function  NQ__
// 主step函数，执行周期 5 ms
void step(void) { try { // 周期 = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

