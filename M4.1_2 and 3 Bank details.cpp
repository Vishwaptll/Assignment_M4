/*
2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
using namespace std;
class bank
{
	string name,type;
	int account,balance,num;
	
	public :
		
	int getdata();
	int putdata();
	
};
		 	int bank ::getdata()
		 {
		 
			cout<<"\n\n\t Enter name of depositer : ";
			cin>>name;
			cout<<"\n\n\t Enter Account number : ";
			cin>>account;
			cout<<"\n\n\t Select type of account : 1. Current 2. Saving ";
			cin>>type;
			
			switch (num)
			{
				case 1 : cout<<"\n\n\t Current";
				
				case 2 :cout<<"\n\n\t Saving";
	
				default : cout<<"\n\n\t Exit";
			}
			
			
			
			cout<<"\n\n\t Your total balance : ";
			cin>>balance;
		
	    }
	
	int bank :: putdata()
	{
		int value,dipoamt,withdraw;
		cout<<"\n\n\t Assign value in bank :";
		cin>>value;
		cout<<"\n\n\t Diposite value :";
		cin>>dipoamt;
		cout<<"\n\n\t Withdraw money : ";
		cin>>withdraw;
		cout<<"\n\n\t Name :"<<name;
		cout<<"\n\n\t Amount :"<<balance;
		cout<<"\n\n\t Type of account :"<<type;
		cout<<"\n\n\t Name of account holder :"<<name;
		cout<<"\n\n\t Balance :"<<balance;
	}
	
	main()
	{
		bank sbi;
		sbi.getdata();
		sbi.putdata();
	}
