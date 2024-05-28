//---------------------------------------------------------------------------


#pragma hdrstop

#include "potsent.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

AnsiString Potsent::getInfo(){
return this->name+this->addres+this->god_roj+this->diagnoz+this->vrach;
}
