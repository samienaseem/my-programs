#include<iostream>
using namespace std;
class cart
{
	char itemname[30];
	int quantity;
	
	public:
	cart()
	{
		itemname[0]='\0';
		quantity=0;
	}
	void input()
	{
		cout<<"enter the name of the item\n";
		cin>>itemname;
		cout<<"enter the quantity\n";
		cin>>quantity;
	}
	void output()
	{
		cout<<itemname<<"\n"<<"	"<<quantity<<"\n";
	}

	
};
int main()
{
	int i=0,n,j;
	cart s[5];
	do
	{
		cout<<"choose an option\n";
		cout<<"add item\n";
		cout<<"display\n";
		cin>>n;
		switch(n)
		{
			case 1:
				s[i].input();
				i++;
				break;
			case 2:
				for(j=0;j<i;j++)
				 s[j].output();
		}
	
	}while(n<=2);
	
}
