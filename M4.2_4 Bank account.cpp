/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/
#include<iostream>
using namespace std;
class bankaccount
{
	private :
		int num,blc,depo,with;
	public :
		void getdata();
		void putdata();
		bankaccount()
		{
			blc=50000;
		}
};
void bankaccount :: getdata()
{
	cout<<"\n\n\t Enter you account number :";
	cin>>num;
	cout<<"\n\n\t Enter balance :";
    cin>>blc;
	cout<<"\n\n\t Enter your deposite :";
	cin>>depo;
	cout<<"\n\n\t Amount you want to withdraw :";
	cin>>with;
}
void bankaccount :: putdata()
{
	cout<<"\n\n\t Account number :"<<num;
	cout<<"\n\n\t Balance :"<<blc;
	cout<<"\n\n\t Deposite :"<<depo;
	cout<<"\n\n\t Withdraw :"<<with;
}
main()
{
	bankaccount b;
	b.getdata();
	b.putdata();
}