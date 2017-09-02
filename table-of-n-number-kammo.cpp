#include<iostream>
using namespace std;

class table
{
	int num;
	
	public:
		int i=1,table;
	void input()
	{
		cout<<"enter the value of number\n";
		cin>>num;
		cout<<"\n\n";
	}
		void output()
	{
		do
	
		{  
			table=num*i;
			cout<<table;
			i++;
			cout<<"\n";
		}
		while(i<=10);
	}
};
int main()
{
	table k;
	k.input();
	k.output();
	return 0;
}
