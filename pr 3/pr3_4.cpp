#include<iostream>
using namespace std;
class Emp1{
	
	public:
	int id=1;
	char name[100]="chhagan";
	int salary=15000;
		void fun1(){
			cout<<"NAME   :  "<<name<<endl;
			cout<<"ID     :  "<<id<<endl;
			cout<<"SALARY :  "<<salary<<endl;
		}
};
class Emp2{
	public: 
	int id=2;
	char name[100]="magan";
	int salary=16000;
		void fun2(){
			cout<<"NAME   :  "<<name<<endl;
			cout<<"ID     :  "<<id<<endl;
			cout<<"SALARY :  "<<salary<<endl;
		}
};
class Manager:public Emp1,public Emp2{
	public:
};
int main(){
	Manager m1;
	m1.fun1();
	cout<<"--------------------------------------------"<<endl;
	m1.fun2();
	return 0;
}
