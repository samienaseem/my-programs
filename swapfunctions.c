#include<stdio.h>
void swap(int *a,int *b)
{ int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d",*a);
	printf("b=%d",*b);
}
int main()
{
	int c=1,d=2;
     swap(&c,&d);
	printf("c=%d",c);
	printf("d=%d",d);
	return 0;
}
