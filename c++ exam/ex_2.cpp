#include<iostream>
using namespace std;
class Bank{
	public:
	int number;
	char name[100];
	char type[100];
	char branch[100];
	int balance;
	
	void set(){
		cout<<"ENTER ACCOUNT NUMBER : ";
		cin>>number;
		cout<<"ENTER USER NAME : ";
		cin>>name;
		cout<<"ENTER ACCOUNT TYPE : ";
		cin>>type;
		cout<<"ENTER BRANCH NAME : ";
		cin>>branch;
		cout<<"ENTER BALANCE : ";
		cin>>balance;
	}
	void get(){
		cout<<"ACCOUNT NUMBER : "<<number<<endl;
		cout<<"USER NAME : "<<name<<endl;
		cout<<"ACCOUNT TYPE : "<<type<<endl;
		cout<<"BRANCH : "<<branch<<endl;
		cout<<"BALANCE : "<<balance<<endl;
		
	}
};
int main()
{
	int n;
	int i;
	int B;
	cout<<"ENTER THE NUMBER OF ACCOUNTS : ";
	cin>>n;
	Bank b[n];
	
	for(i=0;i<n;i++)
	{
		b[i].set();
	}
	
	cout<<"\n\n--------------------------\n\n";
	cout<<"enter your account number : ";
	cin>>B;
	
	for(i=0;i<n;i++)
	{
		if(b[i].number==B)
		{
			b[i].get();
		}
	}
	return 0;
}
