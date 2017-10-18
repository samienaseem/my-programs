#include<stdio.h>
int main()
{
	long long unsigned int a,b,c,d,e;
	printf("enter the number\n");
	scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
	e=a*b*c*d;
	printf("%llu",e);
}
