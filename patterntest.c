#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j-i>=1||j-i==0)
			printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
