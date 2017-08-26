#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x*x*x+2*x*x*x-x-1)
int main()
{
	float x0,x1,x2;
	int k=0;
	float e=.002;
	printf("enter the value of x0 and x1\t\n");
	scanf("%f %f",&x0,&x1);
//	if(f(x0)*f(x1)<0)
	do
	{
		if(f(x0)*f(x1)<0)
		k++;
		x2=(x0+x1)/2;
		if(f(x2)>0)
		{
			x1=x2;
		}
		else
		{
			x0=x2;
		}
		printf("root = %f\t and iteration = %d\t",x2,k);
	}
		while(fabs(f(x2))>e);
		
	printf("\n \n ");
	
	printf("Root = %f \t and\t total number of iteration = %d\t",x2,k);
	return 0;
}
