#include <iostream> 
#include <string> 
using namespace std; 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
class vrach{ 
 public: 
 string fio; 
 string dol ;  
 int staj; 
 string den_r;
 long tel; 
 void vr1(){ 
  cout<<"ФИО: "<<fio<<", Должност: "<<dol<<", стаж: "<<staj<<", День работи: "<<den_r<<", телифон: "<<tel<<"."<<endl; 
 } 
}; 
int main(int argc, char** argv) { 
 setlocale(0,""); 
  vrach d; 
 d.fio="Убайдуллоев А.Ш"; 
 d.dol="Гла.врач"; 
 d.staj= 45; 
 d.den_r="кажды день"; 
 d.tel=929999999; 
 d.vr1(); 
 
  vrach n; 
 n.fio="Розиков Х.К."; 
 n.dol="Гла.врач"; 
 n.staj= 35; 
 n.den_r="кажды день"; 
 n.tel=927777777; 
 n.vr1();  
  
 return 0; 
}

