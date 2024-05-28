#include <iostream>
#include <string>
using namespace std;
class met_cart{
	private:
	string naz_bol=" Нур ";
	int id_p=0;
	public:
	string fio;
	string data;
	string adres;
	int tel;
	string fio_doc;
	int tel_doc;
	
	void setnaz(string naz){
	naz_bol=naz;
	}
	string getna(){
	return naz_bol;
	 };
	int getid_p(){
	return id_p;
	 };
	 void setid_p(int v){
	 id_p=id_p+v;
	 }; 
	  void met(){ 
	  cout<<"ФИО: "<<fio<<", Дата рождения: "<<data<<", Адрес: "<<adres<<", Телифон: "<<tel<<", ФИО Доктора: "<<fio_doc<<", Телифон доктора: "<<tel_doc<<"."<<endl; 
}
};
int main(int argc, char** argv) {
	setlocale(0,""); 
	met_cart met_cart1;
	met_cart1.setid_p(1);
	cout<<"Названия больнитци :"<<met_cart1.getna()<<endl; 
	cout<<"Id мет.карты: "<<met_cart1.getid_p()<<"."<<endl; 
	met_cart1.fio="Убайдуллев А.Ш.";
	met_cart1.data="11.04.2002";
	met_cart1.adres="ул.А Дониш";
	met_cart1.tel=99999999;
	met_cart1.fio="Розиков Х.К.";
 	met_cart1.tel_doc=99999999;
	met_cart1.met();
	return 0;
};
