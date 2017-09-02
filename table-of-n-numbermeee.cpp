#include<iostream>
using namespace std;

class table
{
	int n;
	
	public:
		int i,t;
	void input()
	{
		cout<<"enter the value of number whose table to be printed";
		cin>>n;
	}
	void output()
	{
		for( i=1;i<=10;i++)
		{  
			t=n*i;
			cout<<t;
			cout<<"\n";
		}
	}
};
int main()
{
	table s;
	s.input();
	s.output();
	return 0;
}
