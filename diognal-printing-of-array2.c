#include<stdio.h>
int main()
{
	int a[10][10],i,j,c,r,n,m;
	printf("enter the number of rows and columns");
	scanf("%d%d",&n,&m);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0,c=i;j<=i&&c>=0;j++,c--)
		printf(" %d ",a[c][j]);
	printf("\n");
		
	}
	for(j=1;j<m;j++)
	{
		for(i=n-1,r=j;i>=0&&r<n;i--,r++)
		{
			printf(" %d ",a[i][r]);
		}
		printf("\n");
	}
}
