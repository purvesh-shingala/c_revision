#include<iostream>
using namespace std;

class Bank
{
	private:
	char value,pick,name[100],email[100];
	int ac_num,phone;
	int balance=500000;
	
	public:
	
		Heading()
		{
			cout<<endl<<"\t -: BANK MANAGEMWENT SYSTEM :- "<<endl;
			cout<<"..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
			cout<<"\n\t  -: Designed N Programmed By :- "<<endl;
			cout<<"..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
			cout<<"\t    M A N S V I  S H I N G  L A      \t\t"<<endl<<endl;
			cout<<"\n\t\t  -: TRAINER :- "<<endl;
			cout<<"..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
			cout<<"\t\t GAURAV SIR \t\t"<<endl<<endl;
			cout<<" Press any Key and Enter to Continue : ";
			cin>>value;
		}
		Content()
		{
			run:
			cout<<"\n----------------------------------------------------------------------"<<endl;
			cout<<" -: Press A to Log in as Administrator Or S to Log in as Staff :-"<<endl;
			cout<<"----------------------------------------------------------------------"<<endl;
			cin>>pick;
			
			if(pick=='A')
			{
				cout<<"\n------------------------------------------------------------"<<endl;
				cout<<"\t\t-:Welcome as ADMINISTRATOR :- ";
				cout<<"\n------------------------------------------------------------"<<endl;
				cout<<"\n\tEnter the Name of Administrator : ";cin>>name;
				cout<<"\tEnter the Account Number of Administrator : ";cin>>ac_num;
				cout<<"\tEnter the Phone Number of Administrator : ";cin>>phone;
				cout<<"\tEnter the Email of Administrator : ";cin>>email;
				cout<<"\n..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
				cout<< "\n\tName \t\t:" <<name;
				cout<< "\n\tAmount Number\t:"<<ac_num;
				cout<< "\n\tPhone Number \t:"<<phone;
				cout<< "\n\tEmail \t\t:"<<email;
				cout<<"\n\n..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
			}
			else if(pick=='S')
			{
				cout<<"\n------------------------------------------------------------"<<endl;
				cout<<"\t\t-:Welcome as STAFF :- ";
				cout<<"\n------------------------------------------------------------"<<endl;
				cout<<"\n\tEnter the Name of Staff : ";cin>>name;
				cout<<"\tEnter the Account Number of Staff : ";cin>>ac_num;
				cout<<"\tEnter the Phone Number of Staff : ";cin>>phone;
				cout<<"\tEnter the Email of Staff : ";cin>>email;
				cout<<"\n..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
				cout<< "\n\tName \t\t:" <<name;
				cout<< "\n\tAmount Number\t:"<<ac_num;
				cout<< "\n\tPhone Number \t:"<<phone;
				cout<< "\n\tEmail \t\t:"<<email;
				cout<<"\n\n..._..._..._..._..._..._..._..._..._..._..._..._"<<endl;
			}
			else 
			{
				cout<<"\nInvalid Input!\n\n";
				goto run;
			}
		}
		void deposit(int user_amount)
		{
			cout<<"\nYour Actual Amount is : "<<balance<<endl;
			cout<<"Congrates Your Amount Has Successfully Deposite..."<<endl;
			balance += user_amount;
			cout<<"Your Account Balance is : "<<balance<<endl;
		}
		void transfer(int user_amount)
		{
			if(user_amount<balance)
			{
				cout<<"\nYour Actual Amount is : "<<balance<<endl;
				cout<<"Congrates Your Amount Has Successfully Transfered..."<<endl;
				balance -= user_amount;
				cout<<"Your Account Balance is : "<<balance<<endl;
			}
			else
			{
				cout<<"Sorry You Account Balance Is Only "<<balance<<endl;
			}
		}
		void withdraw(int user_amount)
		{
			if(user_amount<balance)
			{
				cout<<"\nYour Actual Amount is : "<<balance<<endl;
				cout<<"Congrates Your Amount Has Successfully Withdrawn..."<<endl;
				balance -= user_amount;
				cout<<"Your Account Balance is : "<<balance<<endl;
			}
			else
			{
				cout<<"Sorry You Account Balance Is Only "<<balance<<endl;
			}
		}
};

int main()
{
	Bank user;
	int choice,amount;
	user.Heading();
	user.Content();
	
	while(true)
	{
		cout<<"\n\t Press [1] to Deposite the Money"<<endl;
		cout<<"\t Press [2] to Transfer the Money"<<endl;
		cout<<"\t Press [3] to Withdraw the Money"<<endl;
		cout<<"\t Press [4] to Exit"<<endl;
		cout<<"Enter : ";
		cin>>choice;
	
		switch(choice)
		{
			case 1:
			cout<<"\nAmount to Deposite : ";
			cin>>amount;
			user.deposit(amount);
			break;
		
			case 2:
			cout<<"\nAmount to Transfer : ";
			cin>>amount;
			user.transfer(amount);
			break;
		
			case 3:
			cout<<"\nAmount to Withdraw : ";
			cin>>amount;
			user.withdraw(amount);
			break;
			
			case 4:
			cout << "\nThank you for using the Bank System!";
            exit(0);	
		
			default :
			cout<<"Invalid choice. Please try again.";	
			break;
		}
	}
	return 0;
}
