#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the n");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i&&j<=n-i-1)
			{
			
			printf("*");
		
		    }
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
	return 0;
	
}
