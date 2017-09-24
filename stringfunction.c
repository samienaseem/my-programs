#include<stdio.h>
int main()
{
	int i=0,n,ones,tens,sum=0;
	char *s[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty"};
	printf("enter the number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("zero");
	}
	tens=n/10;
	ones=n%10;
	sum=tens*10+ones;
	if(sum<=20)
	{
		printf("%s",s[sum-1]);
	}
	else
	{
		switch(tens)
		{
			case 2:
				{
					printf("twenty");
					break;
				}
			case 3:
				{
					printf("thirty");
					break;
				}
			case 4:
				{
					printf("fourty");
					break;
				}
			case 5:
				{
					printf("fifty");
					break;
				}
			case 6:
				{
					printf("sixty");
					break;
				}
			case 7:
				{
					printf("seventy");
					break;
				}
			case 8:
				{
					printf("eighty");
					break;
				}
			case 9:
				{
					printf("ninty");
					break;
				}
			
					
		}
		printf("%s",s[ones-1]);
	}
	
	
}
