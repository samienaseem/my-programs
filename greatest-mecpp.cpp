#include<iostream>
using namespace std;
class great
{
	int a,b,c;
	
	public:
    void input();
    void output();
};
inline void great::input()
{
		cout<<"enter the value of a b and c :"<<endl;
		cin>>a>>b>>c;
}
inline void great::output()
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
int main()
{
	great x;
	
	x.input();
	x.output();
}
