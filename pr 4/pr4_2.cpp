#include <iostream>
using namespace std;
class Distance 
{
    public:
   	int feet, inches;
    void Distance1()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }

    void Distance2()
    {
        cout<<"Feet:"<<feet<<endl;
        cout<<"Inches:"<<inches<< endl;
    }

    Distance operator+(Distance& dist1)
    {
        Distance temp; 
        temp.inches=inches+dist1.inches;
        temp.feet=feet+dist1.feet+(temp.inches/12);
        temp.inches=temp.inches%12;
        return temp;
    }
};
int main()
{
    Distance d1, d2, d3;
	cout<<"Enter first  distance:"<<endl;
    d1.Distance1();
	cout<<"Enter second distance:"<<endl;																													
    d2.Distance1();
	d3=d1+d2;
	cout<<"Total Distance:"<<endl;																																																																													 
    d3.Distance2();
    return 0;
}
