#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	int age;
	float salary;
	
	ofstream fout;
	fout.open("file1.txt");
	
	cout<<"enter the age ";
	cin>>age;
	cout<<"enter the name ";
	cin>>name;
	cout<<"enter the salary of emplyee";
	cin>>salary;
	
	fout<<age<<"";
	fout<<name<<"";
	fout<<salary<<"";
	
	fout.close();
	
	ifstream fin;
	fin.open("file1.txt");
	fin>>age;
	fin>>name;
	fin>>salary;
	
	cout<<"name si"<<name;
	cout<<"salary is :"<<salary;
	cout<<"age is:"<<age;
	
	fin.close();
}
