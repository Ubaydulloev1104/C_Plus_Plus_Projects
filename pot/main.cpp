#include <iostream> 
#include <string> 
using namespace std; 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
class pot{ 
 public: 
 string fio; 
 string adres;  
 string got_roj; 
 string diagnos;
 string vrach;
 long tel_vrach;
 int nomer_cor; 
 void pot1(){ 
  cout<<"ФИО: "<<fio<<", адрес: "<<adres<<", год рождения: "<<got_roj<<", Диагнос: "<<diagnos<<", Фио Врач: "<<vrach<<", телифон Врача: "<<tel_vrach<<", номер мет.кортичка: "<<nomer_cor<<"."<<endl; 
 } 
}; 
int main(int argc, char** argv) { 
 setlocale(0,""); 
  pot d; 
 d.fio="Убайдуллоев А.Ш"; 
 d.adres="ул.А Дониш №28"; 
 d.got_roj="11,04,2002 г"; 
 d.diagnos="здаровы"	;
 d.vrach="Розиков Х.К."; 
 d.tel_vrach=929999999;
 d.nomer_cor=123123;
 d.pot1(); 
 
 return 0; 
}
