#include<iostream>
using namespace std;
class house{
	public:
	int rooms=3;
	int hall=1;
	int bathroom=4;
};
class room{
	public:
	int bad=1;
	int bathroom=1;
	int mirror=1;
};

int main()
{
	house h1;
	room r1;
	
	cout<<"house deatail = "<<endl;
	cout<<"room = "<<h1.rooms<<endl;
	cout<<"hall = "<<h1.hall<<endl;
	cout<<"bathroom = "<<h1.bathroom<<endl;
	
	
	cout<<"\n\nroom deatail = "<<endl;
	cout<<"bad = "<<r1.bad<<endl;
	cout<<"bathroom = "<<r1.bathroom<<endl;
	cout<<"mirror = "<<r1.mirror<<endl;
	
	
	return 0;
}
