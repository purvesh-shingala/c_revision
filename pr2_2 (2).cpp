#include<iostream>
#include<string.h>
using namespace std;
class Supermarket{
	public:
	int id=101110;
	int password=983320;
	int number;
	char name[100];
	int qut;
	int price;
	int discount;

};
int main(){
	Supermarket s1;
	cout<<"ENTER ITEAM_NUMBER : ";
	cin>>s1.number;
	cout<<"ENTER ITEAM_NAME : ";
	cin>>s1.name;
	cout<<"ENTER  Quantity : ";
	cin>>s1.qut;
	cout<<"ENTER  PRICE : ";
	cin>>s1.price; 
	cout<<"ENTER  DISCOUNT : ";
	cin>>s1.discount;
	
	
	cout<<"\n\n-----------------------------------------------\n\n";
	int a;
	int b;
	int x,y;
	x=s1.price*s1.qut;
	y=x-((x*s1.discount)/100);
	cout<<"enter id : ";
	cin>>a;
	cout<<"enter password : ";
	cin>>b;
	
	if((a==101110) && (b==983320))
	{
		cout<<"\n\n\n------YOUR BILL------\n\n\n";
		cout<<"ITEAM NUMBER : "<<s1.number<<endl;
		cout<<"ITEAM NAME : "<<s1.name<<endl;
		cout<<"ITEAM Quantity : "<<s1.qut<<endl;
		cout<<"ITEAM PRICE : "<<s1.price<<endl;
		cout<<"DISCOUNT : "<<s1.discount<<"%"<<endl;
		cout<<"**********total price***************"<<endl;
		cout<<"TOTAL : "<<x<<endl;
		cout<<"**********bill with discount**********"<<endl;
		cout<<"BILL : "<<y<<endl;
		
		
	}
	else
	{
		cout<<"id & password is wrong...........................";
	}
	
	
	return 0;
}

