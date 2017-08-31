#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n,s;
	printf("enter the rows and columns of the matrix");
	scanf("%d%d",&m,&n);
	printf("enter the elements of matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf(" [%d] ",a[i][j]);
		}
		printf("\n");
	}

	for(i=n-1,j=0;i>0;i--,j++)
	{
	    
			for(s=j;s<i;s++)
		
			printf("[%d]",a[j][s]);
		
			for(s=j;s<i;s++)
		
			printf("[%d]",a[s][i]);
			
			for(s=i;s>j;s--)
			
			printf("[%d]",a[i][s]);
			
			for(s=i;s>j;s--)
			
			printf("[%d]",a[s][j]);
			
		
	}
}
