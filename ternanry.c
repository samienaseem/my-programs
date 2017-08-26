#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	b=(a+b)-(a=b);
	printf("after swapping the values are a=%db=%d",a,b);
	return 0;
}
