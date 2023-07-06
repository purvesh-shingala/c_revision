#include<iostream>
using namespace std;
class Mother{
	public:
		void functionm(){
			cout<<"hello i am mother....."<<endl;;
		}
};
class Daughter:public Mother{
	public:
		void functiond(){
			cout<<"hello i am daughter..."<<endl;;
		}
};
int main(){
	Daughter d1;
	d1.functiond();
	d1.functionm();
	return 0;
}
