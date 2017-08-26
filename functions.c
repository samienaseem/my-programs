#include<stdio.h>
void Area(int l, int m);
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	Area(a,b); 
	return 0;
}
void Area(int l,int m)
{
	int result;
	result=l*m;
	printf("the result id =%d",result);
}
