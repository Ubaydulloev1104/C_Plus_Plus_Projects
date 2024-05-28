#include <iostream>
#include <string>
using namespace std;
class sss{
	public:
	virtual double good()=0;
	virtual void printInfo()=0;
};
class dan:public sss{
	public:
	string fio; 
	int Id;
	int zar;
	int got;
	 void vr1(){ 
  cout<<"ФИО: "<<fio<<", Id: "<<Id<<", зарпилата: "<<zar<<", Дата поступления на работу: "<<got<<endl; 
 } 
		double a;
		double good()override{
		return a-got;
		}
		void printInfo()override{
		cout<<"Стаж:"<<endl;
		}
		dan(double x){
			a=x;
		}
};
class zarplata:public sss{
	public:
		int zar;
		double R;
		double good()override{
		return zar*R/100;
		}
		void printInfo()override{
		cout<<"Налог на зарплате 17%:"<<endl;
		}
		zarplata(double r){
			R=r;
		}
};
int main(int argc, char** argv) {
	setlocale(0,"");
	dan s(2020);
	s.fio="Убайдуллоев А.Ш.";
	s.Id=12345;
	s.zar=4000;
	s.got=2000;
	s.vr1();
	s.printInfo();
	cout<<s.good()<<endl;
	
	zarplata s1(17);
	s1.zar=4000;
	s1.printInfo();
	cout<<s1.good()<<endl;
	return 0;
}
