﻿// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN Variable CAN7C1 MCwwLDB4MSw4OTk5RFFvXw__
// 变量文档 "CAN7C1"
TMPVarInt CAN7C1;
// CODE BLOCK END Variable CAN7C1

// CODE BLOCK BEGIN Variable DSPVersion MiwwLCw_
// 变量文档 "DSPVersion"
TMPVarString DSPVersion;
// CODE BLOCK END Variable DSPVersion

// CODE BLOCK BEGIN Variable MCUVersion MiwwLCw_
// 变量文档 "MCUVersion"
TMPVarString MCUVersion;
// CODE BLOCK END Variable MCUVersion

// GEN BLOCK BEGIN Custom_Function
s32 ReadVer(void);
s32 MakeCheckSum(const pu8 AData, const u8 ALen);
s32 AnsysVer(void);
// GEN BLOCK END Custom_Function

// CODE BLOCK BEGIN On_Var_Change On_VarCAN7C1 Q0FON0MxLC0x
// 变量变化事件 "On_VarCAN7C1" 针对变量 "CAN7C1" [On Written]
void on_var_change_On_VarCAN7C1(void) { try { // 变量 = CAN7C1

ReadVer();

// Version.set(230);

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_VarCAN7C1

// CODE BLOCK BEGIN Custom_Function ReadVer dm9pZA__
// 自定义函数 "ReadVer"
s32 ReadVer(void) { try { // 自定义函数: 
  
TCAN c;
c.init_w_std_id(0x7C1, 8);

u8 i;
i = CAN7C1.get();

c.FData[0] = 0x03;
c.FData[1] = 0x22;
c.FData[2] = 0xF1;
c.FData[3] = 0x94;
c.FData[4] = 0x00;
c.FData[5] = 0x00;
c.FData[6] = 0x00;
c.FData[7] = 0x00;
// CAN7C1.set(c);
com.transmit_can_async(&c);
app.wait(20,"ddd");

c.FData[0] = 0x30;
c.FData[1] = 0x00;
c.FData[2] = 0x14;
c.FData[3] = 0x00;
c.FData[4] = 0x00;
c.FData[5] = 0x00;
c.FData[6] = 0x00;
c.FData[7] = 0x00;
com.transmit_can_async(&c);
 
  
  
  
  
  return IDX_ERR_OK;

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); return(IDX_ERR_MP_CODE_CRASH); }}
// CODE BLOCK END Custom_Function ReadVer

// CODE BLOCK BEGIN On_Shortcut ReadVer MTY0NjY_
// 按键事件 "ReadVer" 快捷键 = Ctrl+R
void on_shortcut_ReadVer(const s32 AShortcut) { try { // 按键事件 = Ctrl+R
      
ReadVer();     //读取版本


// if (ACAN->FIdxChn != CH1) return; // if you want to filter channel

;

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Shortcut ReadVer

// CODE BLOCK BEGIN Custom_Function MakeCheckSum Y29uc3QgcHU4IEFEYXRhLCBjb25zdCB1OCBBTGVu
// 自定义函数 "MakeCheckSum"
s32 MakeCheckSum(const pu8 AData, const u8 ALen) { try { // 自定义函数: 
 // return IDX_ERR_OK;
u8 crc = 0x11; 
u8 byte_index; 
u8 bit_index;
// CRC8 demo 

crc = *(AData + 1)^*(AData + 2)^*(AData + 3)^*(AData + 4)^*(AData + 5)^*(AData + 6)^*(AData + 7)+0x10;	
//crc =    *(AData + 7);
return crc;

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); return(IDX_ERR_MP_CODE_CRASH); }}
// CODE BLOCK END Custom_Function MakeCheckSum

// CODE BLOCK BEGIN On_CAN_Rx CAN_Rx_7C9 MCwtMSwxOTkz
// CAN报文接收事件 "CAN_Rx_7C9" 针对标识符 = 0x7C9
void on_can_rx_CAN_Rx_7C9(const TCAN* ACAN) { try {  // 针对标识符 = 0x7C9
// if (ACAN->FIdxChn != CH1) return; // if you want to filter channel

AnsysVer


       
       
       
       
       

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_CAN_Rx CAN_Rx_7C9

// CODE BLOCK BEGIN On_CAN_PreTx CAN_PreTx_0xF8 MCwtMSwyNDg_
// CAN报文预发送事件 "CAN_PreTx_0xF8" 针对标识符 = 0xF8
void on_can_pretx_CAN_PreTx_0xF8(const PCAN ACAN) { try {  // 针对标识符 = 0xF8
// if (ACAN->FIdxChn != CH1) return; // if you want to filter channel
THCU_1_6_1 HCU_1_6_1;
HCU_1_6_1.init(); // 在使用此结构体前调用这段初始化代码
HCU_1_6_1.FCAN = *ACAN; // 若是在回调函数中，请用ACAN数据赋值FCAN
// deal with signals using HCU_1_6_1.XXX

//HCU_1_6_1.Checksum_HCU_1_6=ACAN->FCAN[1]^ACAN->FCAN[2]^ACAN->FCAN[3]^ACAN->FCAN[4]^ACAN->FCAN[5]^ACAN->FCAN[6]^ACAN->FCAN[7];
//HCU_1_6_1.Checksum_HCU_1_6=9;
HCU_1_6_1.Checksum_HCU_1_6=MakeCheckSum(&HCU_1_6_1.FCAN.FData[0], 8); 
*ACAN = HCU_1_6_1.FCAN;

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_CAN_PreTx CAN_PreTx_0xF8

// CODE BLOCK BEGIN On_CAN_PreTx CAN_PreTx_0xFC MCwtMSwyNTI_
// CAN报文预发送事件 "CAN_PreTx_0xFC" 针对标识符 = 0xFC
void on_can_pretx_CAN_PreTx_0xFC(const PCAN ACAN) { try {  // 针对标识符 = 0xFC
TEEM_2_1 EEM_2_1;
EEM_2_1.init(); // 在使用此结构体前调用这段初始化代码
EEM_2_1.FCAN = *ACAN; // 若是在回调函数中，请用ACAN数据赋值FCAN
// deal with signals using EEM_2_1.XXX
EEM_2_1.Checksum_EEM_2=MakeCheckSum(&EEM_2_1.FCAN.FData[0], 8); 
*ACAN = EEM_2_1.FCAN;
// if (ACAN->FIdxChn != CH1) return; // if you want to filter channel

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_CAN_PreTx CAN_PreTx_0xFC

// CODE BLOCK BEGIN Custom_Function AnsysVer dm9pZA__
// 自定义函数 "AnsysVer"
s32 AnsysVer(void) { try { // 自定义函数: 
  
  
 char DSPraw[8];
 char MCUraw[4];
    
// 
 if (ACAN->FData[0] == 0x10 && ACAN->FData[1] == 0x13 &&  ACAN->FData[2] == 0x62
 && ACAN->FData[3] == 0xF1 &&  ACAN->FData[4] == 0x94)
 {
        MCUraw[0]= (ACAN->FData[5]&0x0F)+0x30;
        MCUraw[1]= (ACAN->FData[6]&0x0F)+0x30;
        MCUraw[2]= (ACAN->FData[7]&0x0F)+0x30;
        MCUraw[3]= '\0'; 
        MCUVersion.set(MCUraw);
       }
       
if (ACAN->FData[0] == 0x21)
{
        DSPraw[0]= (ACAN->FData[1] & 0x0F) + 0x30;
        DSPraw[1]= (ACAN->FData[2] & 0x0F) + 0x30;
        DSPraw[2]= (ACAN->FData[3] & 0x0F) + 0x30;
        DSPraw[3]= (ACAN->FData[4] & 0x0F) + 0x30;
        DSPraw[4]= (ACAN->FData[5] & 0x0F) + 0x30;
        DSPraw[5]= (ACAN->FData[6] & 0x0F) + 0x30;
        DSPraw[6]= (ACAN->FData[7] & 0x0F) + 0x30;
        DSPraw[7]= '\0';
        DSPVersion.set(DSPraw); 

 }
 
  
  
  
  
  
  
  
  
  
  
  return IDX_ERR_OK;

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); return(IDX_ERR_MP_CODE_CRASH); }}
// CODE BLOCK END Custom_Function AnsysVer

// CODE BLOCK BEGIN Step_Function  NQ__
// 主step函数，执行周期 5 ms
void step(void) { try { // 周期 = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 
