/*
1. Write a program to find the multiplication values and the cubic values using
inline function
*/

#include<iostream>
using namespace std;

class num
{
	int a;
	public :
		num()
		{
			cout<<"\n\n\t Enter number  :";
			cin>>a;
			
			
		}
		inline void multi()
		{
			cout<<"\n\n\t Multiplited value :"<<a*a;
		}
		inline void cubic()
		{
			cout<<"\n\n\t Cublic value :"<<a*a*a;
		}
};
main()
{
	num n;
	n.multi();
	n.cubic();
}