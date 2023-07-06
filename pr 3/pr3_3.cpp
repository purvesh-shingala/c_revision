#include<iostream>
using namespace std;
class Mother{
	public:
	int age;
	char name[100];
};
class Zebra:public Mother
{
	public:
		void setdata(){
			cout<<"enter age : ";
			cin>>Mother::age;
			cout<<"enter name : ";
			cin>>Mother::name;
		}
		void getdata(){
			cout<<"I AM ZEBRA"<<endl;
			
			cout<<"MY AGE IS "<<age<<endl;
			cout<<"MY NAME IS "<<name<<endl;
			
		}
};
class Dolphin:public Mother
{
	public:
		void setdata(){
			cout<<"enter age : ";
			cin>>Mother::age;
			cout<<"enter name : ";
			cin>>Mother::name;
		}
		void getdata(){
			cout<<"I AM DLOPHIN\n";
			
			cout<<"MY AGE IS "<<age<<endl;
			cout<<"MY NAME IS "<<name<<endl;
			
		}
};
int main(){
	Zebra z1;
	Dolphin d1;
	z1.setdata();
	z1.getdata();
	d1.setdata();
	d1.getdata();
	return 0;
}
