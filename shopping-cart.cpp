#include<iostream>
using namespace std;
class cart
{
	char itemname[30];
	int quantity;
	int price;
	
	public:
	cart()
	{
		itemname[0]='\0';
		quantity=0;
		price=0;
	}
	void input()
	{
		cout<<"enter the name of the item\n";
		cin>>itemname;
		cout<<"enter the quantity\n";
		cin>>quantity;
		cout<<"enter price of items\n";
		cin>>price;
	}
	void output()
	{
		price=price*quantity;
		cout<<itemname<<"		"<<quantity<<"		"<<price<<"\n";
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
				cout<<"-----------------------------------------\n";
				cout<<"items         quantity         price \n";
				cout<<"------------------------------------------\n";
				for(j=0;j<i;j++)
				 s[j].output();
				cout<<"==========================================\n\n";
		}
	
	}while(n<=2);
	
}
