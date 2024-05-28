//---------------------------------------------------------------------------


#pragma hdrstop

#include "Vrach.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

Vrach::Vrach(){
FIO="Roziqov Husanboy";
staj=12;
};
void Vrach::getInfo(){
ShowMessage("Welcome to our Hospital");
};
AnsiString Vrach:getInformation(){
return this->Fio + this->staj;
};