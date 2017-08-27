#include<stdio.h>
int main()
{
	int a[10][10],i,j,m=4,n=4,x,y;
	printf("enter the element");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);		}
	}
	x=a[0][0];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{
			printf("%d",a[x][y]);}
			printf("\n");
	}

     for(i=0;i<2;i++)
     {
     	for(j=2;j>0;j--)
     	{printf("%d",a[j][i]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<3;i++)
	 {for(j=3;j>0;j--)
	 {printf("%d",a[j][i]);
	 }
	 printf("\n");
	
}
}
