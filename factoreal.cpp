#include<iostream>
using namespace std;
class fact
{
	int i,f=1,n;
	
	public:
		
			getdata()
			{
				cout<<"enter the value of n :";
				cin>>n;
				for(i=1;i<=n;i++)
				{
					f=f*i;
				}
			}
			set()
			{
				cout<<"factorial="<<f;
				
			}
		
};
int main()
{
	fact s;
	s.getdata();
	s.set();
	return 0;
}
