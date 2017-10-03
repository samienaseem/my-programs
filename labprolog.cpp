#include<iostream>
using namespace std;
class product
{
	char itemname[20],issue[20],rec[20];
	int quantity,n;
	public:
		void inventry()
		{
		
		do
		{
			cout<<" choose an option";
			cin>>n;
			switch(n)
			{
				case 1:
					additem();
					break;
				case 2:
					issueitem();
					break;
				case 3:
					for(int i=0;i<10;i++)
					display();
					//cout<<"item name\tquantity\n";
					//cout<<itemname<<quantity;
	
				    break;
					
			}
		}
		while(n<=3);
	}
	
	void additem()
	{
		cout<<"enter the item name to be added:";
		cin>>itemname;
		cout<<"enter the quantity";
		cin>>quantity;
	}
	
	void issueitem()
	{
		cout<<"enter the name of item to be issued :";
		cin>>issue;
	}
	void display()
	{
		
	cout<<"item name\tquantity\n";
	//for(int i=0;i<10;i++)
	//{
		cout<<itemname<<"\t"<<quantity<<"\n";
	//}
	}
};
int main()
{
	int n;
	product p[10];
	for(int i=0;i<10;i++)
	{
		p[i].inventry();
		p[i].display();
	}
	
	
}
