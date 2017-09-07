#include<iostream>
using namespace std;
class greatest
{
	int a,b,c;
	
	public:
		void input()
		{
			cout<<"enter the value of a b and c :"<<endl;
			cin>>a>>b>>c;
		}
		inline void output()
		{
			if(a>b&&a>c)
			{
				cout<<"a is greatest :"<<a;
			}
			else if(b>a&&b>c)
			{
				cout<<"b is greatest :"<<b;
			}
			else
			{
				cout<<"c is greatest :"<<c;
			}
		}
};
int main()
{
	greatest s;
	
	s.input();
	s.output();
}
