//10.Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;

class write

{
	string xuv,yow,zoo;
	public:
		void line(string aaa,string bbb)
		{
			xuv=aaa;
			yow=bbb;
	
		}
		void line(string aaa,string bbb,string ccc)
		{
			xuv=aaa;
			yow=bbb;
			zoo=ccc;
		
		}
};
main()
{
	write wr;
	cout<<"\n\n\t String 1 :"<<wr.line<<(My Name Is Vishwa,I Am From Patan);
	cout<<"\n\n\t String 2 :"<<wr.line<<(My Name Is Vishwa,I Am From Patan,I Like Drawing);
	
}