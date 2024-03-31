// 2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class rec
{
	int length;
	int width;
	int a;
	
	public:
		void putvalue()
		{
			cout<<"\n\n\t Enter value of length :";
			cin>>length;
			cout<<"\n\n\t Enter value of width :";
			cin>>width;
			cout<<"\n\n\t"<<length*width
			<<a;
		
		
		}
	
};
class area : public rec
{
	public:
		void getvalue()
		{
	cout<<"\n\n\t Area of rectangle "<<a;
	
		}
	
};
main()
{
	area r;

	r.putvalue();
	
	r.getvalue();
}
