#include<stdio.h>
int alnum(char ch)
{
	if(ch>=65&&ch<=90||ch>=97&&ch<=122||ch>=48&&ch<=57)
	{
	   printf("character=%c",ch);
    }
	else
	{
		printf("try again=%c",ch);
	}
}
int tolower(char ch)
{
	if(ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("character=%c%c%c",ch,ch,ch);
	}
	else
	{
		printf("try again=%c",ch);
	}
}
int toupper(char ch)
{
	if(ch>=97&&ch<=122)
	{
		ch=ch-32;
		printf("character=%c",ch);
	}
	else
	{
		printf("try again=%c",ch);
	}

}
int main()
{
	int ch,n;
	printf("enter the character\n");
	scanf("%c%c%c%c",&ch,&ch,&ch,&ch);
	printf("enter the value of n");
	scanf("%d",&n);
	switch(n)
	{  
	    case 1:
		alnum(ch);
		break;
		case 2:
		tolower(ch);
		break;	
		case 3:
		toupper(ch);
		break;
		default:
		printf("uhave entered wrng choice");
			
	}
	return 0;
}
