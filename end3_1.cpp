#include<iostream>
#include<string.h>
using namespace std;
class Dimond{
	public:
	int id;
	char name[100];
	int staff;
	int revenue;
	int import;
	int expo;
	char ceo[100];
	
	
	public:
		Dimond(){
			cout<<"enter id : ";
			cin>>id;
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter staff : ";
			cin>>staff;
			cout<<"enter revenue : ";
			cin>>revenue;
			cout<<"enter import : ";
			cin>>import;
			cout<<"enter export : ";
			cin>>expo;
			cout<<"enter ceo : ";
			cin>>ceo;
			
			cout<<"\n\n---------------------------------\n\n";
			
			cout<<"ID : "<<this->id<<endl;
			cout<<"NAME : "<<this->name<<endl;
			cout<<"STAFF : "<<this->staff<<endl;
			cout<<"REVENUE : "<<this->revenue<<endl;
			cout<<"IMPORT : "<<this->import<<endl;
			cout<<"EXPORT : "<<this->expo<<endl;
			cout<<"CEO : "<<this->ceo<<endl;
	
			cout<<"\n\n--------------------------------\n\n";
		}
		
	
	
};
int main(){
	int n;
	cout<<"enter nymber of compny : ";
	cin>>n;
	Dimond d[n];
	return 0;
}
