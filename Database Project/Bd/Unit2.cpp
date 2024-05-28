//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
AnsiString res::getInfo(){
return this->Idd+this->nazvaniya+this->obeom+this->data_soh+this->tip;
}