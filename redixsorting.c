#include<stdio.h>
int main()
{
	int a[10][10],b[10];
	int i,j,k,r,m,n,l,p=0,c[50];
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	l=c[0];
	for(i=0;i<n;i++)
	{
		if(l<c[i])
		l=c[i];
	}
	while(l>0)
	{
		l=l/10;
		p++;
	}
	int h=1;
	//printf("%d",p);
	for(j=0;j<p;j++)
	{
		for(i=0;i<10;i++)
		{
			b[i]=0;
		}
		for(i=0;i<n;i++)
		{
			r=(c[i]/h)%10;
			a[r][b[r]]=c[i];
			b[r]=b[r]+1;
		}
	//	h=h*10;
	//}
		
		
	     	i=0;
		//{
			for(k=0;k<10;k++)
			{
				for(m=0;m<b[k];m++)
				{
					c[i]=a[k][m];
					i++;
				}
			}
		//}
	

	   
	   	h=h*10;
   }
	
	
	printf("the sorted array is");
	for(i=0;i<n;i++)
	{
		printf("[%d]",c[i]);
	}
	
	
	
}
