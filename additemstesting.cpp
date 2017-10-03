#include<iostream>
#include<string.h>
using namespace std;
    class additem
    {
    //	public:
    	char items[100],itemissue[100];
    	int quantity;
    	public:
    	
    		
    			void input()
    			{
    				cout<<"add items  :";
    				cin>>items;
    				cout<<"quantity of item  :";
    				cin>>quantity;
				}
				void display()
				{
				    cout<<items<<"\t \t  "<<quantity<<"\n";
				}
				void issue()
				{
					cout<<"enter the item to be issued\n";
					cin>>itemissue;
					if(strcmp(items,itemissue)==0)
					{
							quantity=quantity-1;
							cout<<"item is issued";
					}    
				}
			
    	
	};
	int main()
	{
		int n=0;//,quantity=10;
		additem p[20];
		for(int i=0;i<=20;i++)
		{
			do
			{
				
				cout<<"********choose an option**********\n";
				cout<<"1.add items\n";
				cout<<"2.issue an item\n";
				cout<<"3.received item\n";
				cout<<"4.display items\n ";
				cin>>n;
				switch(n)
				{
					case 1:
						//cout<<"Add items";
						p[i].input();
						break;
					case 2:
						p[i].issue();
					//	{
					//	   quantity=quantity-1;
					//	}
					//	cout<<quantity;
						break;
						
					case 4:
						cout<<"items\t\t quantity\n";
						for(int j=0;j<=i;j++)
						{
							p[j].display();
						}
						break;
						
				}
			}
			while(n>=4);
		}
	}

