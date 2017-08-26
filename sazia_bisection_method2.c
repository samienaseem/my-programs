#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x-2*x-5)

int main()
{
	float a,b,c;
	int i=0;
	float r=.002;
	printf("enter the value of a and b\t\n");
	scanf("%f %f",&a,&b);
	do
	{
		if(f(a)*f(b)<0)
		i++;
		c=(a+b)/2;
		if(f(c)>0)
		b=c;
		else
		a=c;
		
		printf("root = %f\t and iteration = %d\t\n",c,i);
	}
		while(fabs(f(c))>r);
		
	printf("\n  ");
	printf("root = %f\t and  \a number of iteration = %d\t",c,i);
	return 0;
}
