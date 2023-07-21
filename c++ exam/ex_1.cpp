#include<iostream>
using namespace std;
class Fect{
	public:
	int a;
	int b;
	int i;
	void set(){
		cout<<"enter number : ";
		cin>>a;
	}
	void get(){
		for(i=0;i<=1000;i++){
		
		if(a>0){
			
			cout<<a;
			if(a==1){
				cout<<" ";
				
			}else{
				cout<<"*";
			}
			
			a--;
		}
		else{
			break;
		}
	}
		
	}
};
int main(){
	Fect f1;
	f1.set();
	cout<<"factorial series : "<<endl;
	f1.get();
	return 0;
}
