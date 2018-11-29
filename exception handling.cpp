#include<iostream>
using namespace std;
main()
{
	int x;
	char* y="zero";
	cout<<"Enter a positive number :";
	cin>>x;
	try
	{
		if(x==0)
		{
			throw y;		//exception1
			
		}
		else if(x>0)
		{
			throw x;		//exception2
		}
	}
	    else
		{
			cout<<endl<<"The Entered number is :"<<x;
		}
	catch(int x)
	{
		cout<<endl<<"the entered number is negative :"<<x;
	}
	catch (char *y)
	{
		cout<<endl<<"The Entered number is "<<y;
		
	}
	cout<<endl<<"Exiting main() Function";
}
