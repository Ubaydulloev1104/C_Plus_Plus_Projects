//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <comobj.hpp>
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 ADOTable1->Active=false;
 ADOTable1->TableName = ComboBox1->Text;
 ADOTable1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
//insert into tbl2(nazvaniya) values("fay3");
//delete * from tbl2 where idd=1;
//update tbl2 set nn="SomeText" where idd=1;
AnsiString q=Edit1->Text;
ADOCommand1->CommandText=q;
ADOCommand1->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Edit1->Text = "";
Edit2->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
//select * from tbl2 where idd=2;
AnsiString str = Edit2->Text;
ADOQuery1->SQL->Add(str);
ADOQuery1->Active=true;
DataSource1->DataSet=ADOQuery1;

}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
res p;
p.Idd="01";
p.nazvaniya="fay1";
p.obeom=" 2.mb";
p.data_soh="27,09,2022";
p.tip="Microsoft Word (.docx)";
Memo1->Text=p.getInfo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
      Variant v = Variant::CreateObject("Word.Application");  //Создаем объект автоматизации
  v.OlePropertySet("Visible",Variant(true));             //Сделаем приложения видимым
  //v.OleProcedure("new","");
  Variant my_docs = v.OlePropertyGet( "documents" );      //В переменной my_docs присваиваем значение documents
     my_docs.OleProcedure( "Add" );        //По умолчанию ключевое слова Add  создает новый документ в MS Word
     v.OleProcedure( "Activate" );
     Variant vVarDoc=my_docs.OleFunction("Item",Variant(1));  //Чтобы обратиться к документу после его создания можно по свойству item
     vVarDoc.OleProcedure("Activate");
     Variant vVarParagraphs=vVarDoc.OlePropertyGet("Paragraphs"); //Получаем свойство Paragraphs объекта документа
     AnsiString str="\t\t Idd=01,nazvaniya=fay1,obeom=2.mb,data_soh=27,09,2022 ,tip=Word.Application.\t\t";    //Задаем текст для вывода
     vVarParagraphs.OleProcedure("Add");   //Добавляем параграф
     Variant vVarParagraph=vVarParagraphs.OleFunction("Item",Variant(1));  //Работаем с 1 параграфом
     vVarParagraph.OlePropertyGet("Range").     //
     OlePropertySet("Text",str.c_str());      //Добавляем ранее написанный текст "АВТОСЕРВИС"

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
res p;
p.Idd=Edit3->Text;
p.nazvaniya=Edit4->Text;
p.obeom=Edit5->Text;
p.data_soh=Edit6->Text;
p.tip=Edit7->Text;
Memo1->Text=p.getInfo();
}
//---------------------------------------------------------------------------

