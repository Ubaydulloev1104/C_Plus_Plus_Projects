//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "potsent.h"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Potsent p;
p.name="Zokirov Abdurashid   ";
p.addres="N.Jabbor Rasulov   ";
p.god_roj="03.03.2001    ";
p.diagnoz="remotezm   ";
p.vrach="Roziqov Husanboy";
Memo1->Text=p.getInfo();
}
//---------------------------------------------------------------------------
