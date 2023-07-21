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
		int e;
		void set(){
			cout<<"enter A : ";
			cin>>B::a;
			cout<<"enter B : ";
			cin>>b;
			cout<<"enter C : ";
			cin>>c;
			cout<<"enter D : ";
			cin>>d;
		}
		void get(){
			e=B::a*b*c*d;
			cout<<"ANS : "<<e<<endl;
		}
};
int main(){
	D d1;
	d1.set();
	d1.get();
	return 0;
}
