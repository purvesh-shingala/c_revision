#include<iostream>
using namespace std;

class Message{
	private:
	string user_s;
	public:
	Message()
	{
		cout<<"Enter String : ";
		cin>>user_s;
	}
	void print()
	{
		cout<<"\nHello "<<user_s<<endl;
	}
	void print(string s)
	{
		cout<<s<<endl;
	}
};

int main()
{
	Message s1;
	s1.print();
	s1.print("Welcome to C++...");

	return 0;	
}
