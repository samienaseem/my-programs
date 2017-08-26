#include<iostream>
#include<math.h>
using namespace std; 
class areacircle
{ 
int Area=0;
float pi=3.14,r;
public:
void setdata()
 {
 cout<<"Enter the value of radius:";
 cin>>r;
 Area=pi*pow(r,2);
 }
 void getdata()
{
	 
  cout<<"Area of circle ="<<Area;
}
};
int main()
{ areacircle s;
  s.setdata();
  s.getdata();
	
  return 0;
}

