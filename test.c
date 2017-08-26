#include<iostream>
using namespace std
class circle
{ int r;
float area,pi;
public:
void getdata()
{
 cout<<"Enter the value of radius:";
 cin>>r;
 pi=3.14;
 area=pi*r*r;
 }
 void display()
{
  cout<<"Area of circle of the entered radius="<<area;
}
};
int main()
{ circle c;
  c.getdata();
  c.display();
	
  return 0;
}

