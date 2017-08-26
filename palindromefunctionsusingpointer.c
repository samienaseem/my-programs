#include<stdio.h>
int palin(int num,int *rev)
{
	int digit,x;
	x=num;
	while(num>0)
	{
		digit=num%10;
		*rev=*rev*10+digit;
		num=num/10;
	}
		
}
int main()
{
	int num,rev=0;
	printf("enter the value of num");
	scanf("%d",&num);
	palin(num,&rev);
	if(num==rev)
	{
		printf("%d=palindrome");
		
	}
	else
	{
		printf("%d=not palindrome try again");
	}
	return 0;
}
