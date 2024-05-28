#include <iostream>
#include <string>
using namespace std;
template <typename T>
class dok{
	T id;
	public:
		dok(T id): id(id){
		}
		T getid(){
			return id;
		}
};

int main(int argc, char** argv) {
	setlocale(0,"");
	dok<int> a(123);
	cout<<"a"<<a.getid()<<endl;
	dok<string> a1("sd123");
	cout<<"a1"<<a1.getid()<<endl;
	
	
	return 0;
}
