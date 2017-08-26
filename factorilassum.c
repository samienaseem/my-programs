#include<stdio.h>

	int fact(int num);
	int main()
	{
		int num,f,i;
		float sum=0;
		printf("enter the value of num");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			f=fact(i);
			if(i%2!=0)
			{
				sum=sum+(i/f);
			}
			else
			{
				sum=sum-(i/f);
			}
			
	
	    }
	    
		printf("sum=%f",sum);
		
	}
	int fact(int num)
	{
		int fact=1,i;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		return fact;
	}

