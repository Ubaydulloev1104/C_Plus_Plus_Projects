#include <iostream>
#include <string>
using namespace std;

class sotrutnic{
	public:
	string Fio;
	int Id;
	string dolj;
	string adel;
	
	void printinfo(){
		cout<<"Фио: "<<Fio<<", Id: "<<Id<<", Должност:"<<dolj<<",Адель: "<<adel<<endl; 
	}	
};
class Vrach:public sotrutnic{
	public:
	string sp;
	string adres;
	int tel;
	void printinfo(){
		sotrutnic::printinfo();
		cout<<"Спецальность: "<<sp<<", Адрес: "<<adres<<", Телифон:"<<tel<<endl;
	}
};

int main(int argc, char** argv){
	setlocale(0,"");
	Vrach v;
	v.Fio="Убайдуллоев А.Ш.";
	v.Id=12345;
	v.dolj="Врач";
	v.adel="a1";
	v.sp="Хирург";
	v.adres="н.Спитамен";
	v.tel=7777777;
	v.printinfo();
	return 0;
}
