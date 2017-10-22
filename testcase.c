#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	ch=getch();
	if(ch==32)
	{
		gotoxy(100,100);
		printf("test passed");
	}
}
