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
class C:public A{
	public:
		int c;
};
class D:public B,public C{
	public:
		int d;
		void set(){
			cout<<"enter a : ";
			cin>>B::a;
			cout<<"enter b : ";
			cin>>b;
			cout<<"enter c : ";
			cin>>c;
			cout<<"enter d : ";
			cin>>d;
		}
		void get(){
			cout<<"ans : "<<B::a+b+c+d<<endl;
		}
};
int main(){
	D d1;
	d1.set();
	d1.get();
	return 0;
}
