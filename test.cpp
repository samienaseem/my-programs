#include<iostream.h> 
class circle
{ 
int r,A;
float pi=3.14;
public:
void getdata()
 {
 cout<<"Enter the value of radius:";
 cin>>r;
 A=pi*r*r;
 }
 void show()
{
	 
  cout<<"Area of circle ="<<A;
}
};
int main()
{ circle s;
  s.getdata();
  s.show();
	
  return 0;
}

