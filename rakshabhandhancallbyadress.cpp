#include<iostream>
using namespace std;
class raksha {
	int money;
	public:
		void input()
		{
			cout<<"enter the money:";
			cin>>money;
		}
		void output()
		{
			cout<<"--total money is-----"<<money;
		}
		void getmoney(raksha *a,raksha *s)
		{
			money+=(*a).money+(*s).money;
			(*a).money=0;
			(*s).money=0;
		}
};
int main()
{
	raksha s1,b1,b2;
	s1.input();
	b1.input();
	b2.input();
	s1.getmoney(&b1,&b2);
	s1.output();
	b1.output();
	b2.output();
}

