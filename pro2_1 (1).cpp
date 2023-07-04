#include<iostream>
using namespace std;
class Train{
	public:
	int number;
	char source[100];
	char name[100];
	char destination[100];
	char time[100];
	
	
};

int main(){
	Train t[3];
	int i;
	for(i=1;i<=3;i++)
	{
	cout<<"enter train number : ";
	cin>>t[i].number;
	cout<<"enter train name : ";
	cin>>t[i].name;
	cout<<"enter train source : ";
	cin>>t[i].source;
	cout<<"enter train destination : ";
	cin>>t[i].destination;
	fflush(stdin);
	cout<<"enter train time : ";
	cin>>t[i].time;
	}
	
	int a;
	for(i=0;i<10000;i++)
	{
	
	cout<<"enter train number  : ";
	cin>>a;
	
	if(a==t[1].number)
	{
		cout<<"train number = "<<t[1].number<<endl;
		cout<<"train name = "<<t[1].name<<endl;
		cout<<"train source = "<<t[1].source<<endl;
		cout<<"train destination = "<<t[1].destination<<endl;	
		cout<<"train time = "<<t[1].time<<endl;
	}
	else if(a==t[2].number)
	{
		cout<<"train number = "<<t[2].number<<endl;
		cout<<"train name = "<<t[2].name<<endl;
		cout<<"train source = "<<t[2].source<<endl;
		cout<<"train destination = "<<t[2].destination<<endl;	
		cout<<"train time = "<<t[2].time<<endl;
		
	}
	else if(a==t[3].number)
	{
		cout<<"train number = "<<t[3].number<<endl;
		cout<<"train name = "<<t[3].name<<endl;
		cout<<"train source = "<<t[3].source<<endl;
		cout<<"train destination = "<<t[3].destination<<endl;	
		cout<<"train time = "<<t[3].time<<endl;
	}
	else
	{
		cout<<"train not found.................";
		break;
	}
}
	return 0;
}
