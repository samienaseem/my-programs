#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m,sum=0;
	printf("enter the rows and columns of array");
	scanf("%d%d",&n,&m);
	printf("enter the elemmts of array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
//	for(i=0,j=0;i<n&&j<m;i++,j++)
//	{
//		sum+=a[i][j];
//	}

		printf("the given matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		for(i=0,j=0;i<n&&j<m;i++,j++)
	{
		sum+=a[i][j];
	}
		printf("the sum=%d",sum);
	
}
