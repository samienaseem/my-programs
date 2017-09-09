#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m,sum=0,sum1=0,sum2=0,sum3=0,flag=0;
	printf("enter the value of n and m :");
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
			printf("[%d]",a[i][j]);
		}
		printf("\n");
	}
	for(i=0,j=0;i<n&&j<m;i++,j++)
	{
		sum2=sum2+a[i][j];
	}
		for(i=0,j=m-1;i<n&&j>=0;i++,j--)
		{
			sum3=sum3+a[i][j];
		}		
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=sum+a[i][j];
			sum1=sum1+a[j][i];
			
			
		}
	
	if(sum2==sum&&sum3==sum&&sum2==sum1&&sum3==sum1)
	{
		flag++;
	}
	else
	{
	//	printf("not");
	}
}
if(flag!=0)
{
	printf("square magic matrix");
}
else
{
	printf("not square magic matrix");
}
	
}
