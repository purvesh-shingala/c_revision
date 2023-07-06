#include<iostream>
using namespace std;
class Var{
	public:
	int hight;
	int width;
};
class Rectangle:public Var
{
	
	public:
		int R;
		void setData(){
			cout<<"enter hight of rectangle : ";
			cin>>Var::hight;
			cout<<"enter width of rectangle : ";
			cin>>Var::width;
		}
		void getData(){
			R=hight*width;
			cout<<"AREA OF RECTANGLE : "<<R<<endl;
		}
};
class Triangle:public Var
{
	public:
	int T;
	void setData(){
		cout<<"enter hight of triangle : ";
			cin>>Var::hight;
			cout<<"enter base of triangle : ";
			cin>>Var::width;
	}
	void getData(){
			T=0.5*hight*width;
			cout<<"AREA OF TRIANGLE : "<<T<<endl;
		}
	
};
int main(){
	Rectangle r1;
	Triangle t1;
	
	r1.setData();
	r1.getData();
	
	t1.setData();
	t1.getData();
	return 0;
}
