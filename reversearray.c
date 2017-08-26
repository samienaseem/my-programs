#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) (x*x*x-x-1)
int main()
{
	int x0,x1,x2;
	int k=0;
	float e=.0001;
	
    do
	{
		printf("enter the value of x0 and x1");
		scanf("%f %f ",&x0,&x1);
	}
 	while(f(x0)*f(x1)>0);
	
	do
	{
		
		x2=(x0+x1)/2;
		k++;
		if(f(x2)>0)
		{
		   x1=x2;
		}
		else
		{
			x0=x2;
		}
	}
		while(fabs(f(x2))>e);
		//	while(f(x0)*f(x1)>0);
		printf("root =%d and the iterartion =%f",x2,k);
		return 0;
	
		
	
}
