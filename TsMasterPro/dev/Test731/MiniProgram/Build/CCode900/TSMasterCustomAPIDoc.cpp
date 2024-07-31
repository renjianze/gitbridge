#include "TSMasterBaseInclude.h"

DLLEXPORT void __stdcall write_api_document_auto(const void* AOpaque, const TWriteAPIDocumentFunc AAPIFunc, const TWriteAPIParaFunc AParaFunc){
  AAPIFunc(AOpaque, "MakeCheckSum", "CCode900", "", "", 2);
  AParaFunc(AOpaque, 0, "MakeCheckSum", "AData", true, "pu8", "");
  AParaFunc(AOpaque, 1, "MakeCheckSum", "ALen", true, "u8", "");
  AAPIFunc(AOpaque, "ReadVer", "CCode900", "", "", 0);
}
