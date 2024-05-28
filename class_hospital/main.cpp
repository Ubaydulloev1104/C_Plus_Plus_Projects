
#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "vrach.h"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Vrach v;

v.FIO="Roziqov";
v.staj="30";
//v.~Vrach();
v.getInfo();
Label1->Caption=v.FIO;
Edit1->Text=v.getInformation();

}
//---------------------------------------------------------------------------
 