#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("text1.txt",ios::in);
	while(file)
	{
		char ch;
		ch=file.get();
		cout<<ch;
		
	}
	file.close();
}
