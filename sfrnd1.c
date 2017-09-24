#include<stdio.h>
int main()
{
	int x=4,y,z;
	y=--x;
	z=x--;
	printf("%d %d %d",y,x,z);
	return 0;
}
