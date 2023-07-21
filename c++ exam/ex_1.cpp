#include<iostream>
using namespace std;
class Fect{
	public:
	int a;
	int b;
	int i,j;
	int mul=1;
	void set(){
		cout<<"enter number : ";
		cin>>a;
	}
	void get(){
		for(i=1;i<=a;i++)
	{
		for(i=1,j=1;i<=a;i++,j++)
		{
			mul = mul * i;
			cout<<"Factorial of "<<j<<" is : "<<mul<<endl;
		}
		a--;
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
