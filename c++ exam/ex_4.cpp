#include<iostream>
using namespace std;
class A{
	public:
	int a;
};
class B:public A{
	public:
	int b;
};
class C:public B{
	public:
	int c;
	int d;
	void set(){
		cout<<"ENTER A : ";
		cin>>a;
		cout<<"ENTER B : ";
		cin>>b;
		cout<<"ENTER C : ";
		cin>>c;
	}
	void get(){
	d=a+b+c;
		cout<<"sum : "<<d<<endl;
	}
	
};
int main(){
	C c1;
	c1.set();
	c1.get();
	return 0;
}
