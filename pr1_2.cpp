#include<iostream>
using namespace std;
class mall{
	public:
		int balaji;
		int gopal;
		int kurkure;
		int haldiram;
};
int main()
{
	mall s[2];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter balaji : ";
		cin>>s[i].balaji;
		cout<<"enter gopal : ";
		cin>>s[i].gopal;
		cout<<"enter kurkure : ";
		cin>>s[i].kurkure;
		cout<<"enter haldiram : ";
		cin>>s[i].haldiram;
	}
	
	cout<<"\n\n----------------------------------\n\n";
	
	for(i=0;i<2;i++)
	{
		cout<<"\n\nenter balaji : "<<s[i].balaji<<endl;
		cout<<"enter gopal : "<<s[i].gopal<<endl;
		cout<<"enter kurkure : "<<s[i].kurkure<<endl;
		cout<<"enter haldiram : "<<s[i].haldiram<<endl;
	}
	return 0;
}
