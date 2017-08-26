#include<stdio.h>
#include<math.h>
int palin(int num)
{
	int x,p=0,sum,digit,y;
	x=num;
	while(x>0)
	{
		x=x/10;
		p=p+1;
	}
    x=num;
	while(x>0)
	{
		digit=x%10;
		sum=sum+pow(digit,p);
		x=x/10;
	}
	//printf("the number=%d",sum);
	if(num==sum)
	{
		printf("%d=armstring");
		
	}
	else
	{
		printf("%d=not armstrong try again",sum);
	}
		
}
int main()
{
	int num;
	printf("enter the value of num");
	scanf("%d",&num);
	palin(num);
	/*if(num==rev)
	{
		printf("%d=palindrome");
		
	}
	else
	{
		printf("%d=not palindrome try again");
	}*/
	return 0;
}
