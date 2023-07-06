
#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class B:public A
{
	public:
		int b;
};
class C:public A
{
	public:
		int c;
};
class D:public C,public B
{
	public:
		int d;
		int e;
		void setdata(){
			cout<<"enter a : ";
			cin>>C::a;
			cout<<"enter b : ";
			cin>>b;
			cout<<"enter c : ";
			cin>>c;
		}
		void getdata(){
			d=C::a*C::a;
			e=C::a*C::a*C::a;
			cout<<"square of a "<<d<<endl;
			cout<<"square of b "<<b*b<<endl;
			cout<<"square of c "<<c*c<<endl;
			cout<<"cube of a "<<e<<endl;
			cout<<"cube of b "<<b*b*b<<endl;
			cout<<"cube of c "<<c*c*c<<endl;
		}
		
};
int main(){
	D d1;
	d1.setdata();
	d1.getdata();
	return 0;
}
