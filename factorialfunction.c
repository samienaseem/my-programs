#include<stdio.h>
float fact(int num);
int main()
{
	int i,num,f;
	float sum=0;
	printf("enter the value if number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=fact(num);
		if(i%2!=0)
		{
			sum=sum+(i/f);
		}
		else
		{
			sum=sum-(i/f);
		}
	}
	printf("sum=%d",sum);
	return 0;
}
float fact(int num)
{
	int fact,num,i;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
