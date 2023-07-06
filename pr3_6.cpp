#include<iostream>
using namespace std;
class A{
	public:
	int id;
	char name[200];
	char role[100];
	int salary;
	int exp;
	char cname[100];
	char add[100];
	char email[100];
	char number[10];
	void setdataA(){
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter role : ";
		cin>>role;
	}
};
class B:public A
{
	public:
		void setdataB(){
			cout<<"enter salary :  ";
			cin>>salary;
			cout<<"enter expraince : ";
			cin>>exp;
		}
};
class C:public B
{
	public:
		void setdataC(){
			cout<<"enter compny name : ";
			cin>>cname;
			cout<<"enter address : ";
			cin>>add;
		}
	
		
};
class D:public C
{
	public:
		void setdataD(){
			cout<<"enter email id : ";
			cin>>email;
			cout<<"enter phone number : ";
			cin>>number;
		}
		void getdata(){
			cout<<"ID : "<<id<<endl;
			cout<<"NAME : "<<name<<endl;
			cout<<"ROLE : "<<role<<endl;
			cout<<"SALARY : "<<salary<<endl;
			cout<<"EXPRAINCE : "<<exp<<endl;
			cout<<"COMPNY NAME : "<<cname<<endl;
			cout<<"ADDRESS : "<<add<<endl;
			cout<<"EMAIL : "<<email<<endl;
			cout<<"CONTACT : "<<number<<endl;
			
		}
};
int main(){
	D d1;
	d1.setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	d1.getdata();
	return 0;
}
