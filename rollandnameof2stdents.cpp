#include<iostream>
using namespace std;
class students
{
	int roll;
	char name[20];
	
	public:
	
		
		void input();
		void output();
	
		
};
void students::input()
{
	cout<<"enter the roll number   ";
	cin>>roll;
	
	cout<<"enter the name of students   ";
	cin>>name;
}
void students::output()
{
	cout<<"roll no= "<<roll;
	cout<<"name is= "<<name;
}
int main()
{

 students s1;
 s1.input();
 s1.output();
 
 students s2;
 cout<<endl;

 s2.input();
 s2.output();
 return 0;
}


