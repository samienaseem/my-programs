#include<stdio.h>
int main()
{
	int result,n;
	printf("enter the number ");
	scanf("%d",&n);
	result=fact(n);
	printf("the factorial of the given number %d is",result);
}
int fact(int a)
{
	if(a==0)
	return 1;
	else
	return a*fact(a-1);
	
}

