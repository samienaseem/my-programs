#include<iostream>
using namespace std;

class table
{
	int n;
	
	public:
		int i=1,t;
	void input()
	{
		cout<<"enter the value of n";
		cin>>n;
	}
		void output()
	{
		while(i<=10)
	
		{  
			t=n*i;
			cout<<t;
			i++;
			cout<<"\n";
		}
	}
};
int main()
{
	table sr;
	sr.input();
	sr.output();
	return 0;
}
