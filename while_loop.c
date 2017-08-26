#include<stdio.h>
int main()
{
	int m,n,sum=0;
	printf("enter the value of m and n");
	scanf("%d %d",&m ,&n);
	if(m>n)
	{ 
	  m=(n-m)+(n=m);
	}
	
	 while(m<=n)
	 {
		sum=sum+m;
		m++;
	 }  
	printf("the value of sum== %d" ,sum);
     return 0;
}
