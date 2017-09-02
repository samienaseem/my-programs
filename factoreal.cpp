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
				
			}
			output()
			{
				
				for(i=1;i<=n;i++)
				{
					f=f*i;
					//cout<<"\n";
				}
				cout<<"factorial="<<f;
				
			}
		
};
int main()
{
	fact k;
	k.getdata();
	k.output();
	return 0;
}
