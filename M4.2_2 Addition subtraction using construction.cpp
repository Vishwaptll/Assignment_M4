#include<iostream>
using namespace std;

class num
{
	int a,b;
	public :
		void getdata();
		
		
		num()
		{
		a=12;
		b=2;
		}
};
void num :: getdata()
{
	cout<<"\n\n\t Addition :"<<a+b;
	cout<<"\n\n\t Subtraction :"<<a-b;
	cout<<"\n\n\t Division :"<<a/b;
	cout<<"\n\n\t Multiplication :"<<a*b;
	
}

main()
{
	num n;
	n.getdata();

}