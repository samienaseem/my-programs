#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
class product
{
	char itemname[20];
	int quantity,price;
	public:
		product()
		{
			itemname[0]='\0';
			quantity=0;
			price=0;
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
		quantity=quantity-1;
	}
	void recieved()
	{
		quantity=quantity+1;
	}
	void display()
	{
		
		cout<<itemname<<setw(25)<<quantity<<"\n";
	}
	char * lab()
	{
		return itemname;
	}
};
int main()
{
	int n,i=0,j;
	char issue[20],receive[20];
	product p[10];
	do
		{
			cout<<" choose an option\n";
			cout<<"--------------------------\n";
			cout<<"1.add item\n";
			cout<<"2.issue an item\n";
			cout<<"3.recieved an item\n";
			cout<<"4.diplay the inventry\n";
			cin>>n;
			switch(n)
			{
				case 1:
					p[i].additem();
					i++;
					break;
				case 2:
					cout<<"enter the item to be issued:\n";
					cin>>issue;
					for(j=0;j<i;j++)
					{
					  if(strcmp(issue,p[j].lab())==0)
					  {
					  	p[j].issueitem();
					  	cout<<"item is issued";
					  	break;
					  }
				    }
				    if(j==i)
					cout<<"item not found\n";
					
				//	issueitem();
					break;
				case 3:
					cout<<"enter the received item";
					cin>>receive;
					for(j=0;j<i;j++)
					{
					  if(strcmp(receive,p[j].lab())==0)
					  {
					  	p[j].recieved();
					  	cout<<"item is received";
					  }break;
			//		  if(j==i)
			//		cout<<"item not found\n";
				
			}
				if(j==i)
					cout<<"item not found\n";
					
					break;

				case 4:
					cout<<"----------------------------------------------------------\n";
					cout<<"itemname\t\tquantity\n";       
					cout<<"----------------------------------------------------------\n";
					for(int j=0;j<i;j++)
					{
						p[j].display();
					}
					cout<<"-----------------------------------------------------------\n\n";
				
					//cout<<"item name\tquantity\n";
					//cout<<itemname<<quantity;
					break;
					
			}
		}
		while(n<=4);
}
