#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the value of a and b and c and d and e\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
			    	printf("a is greater");
			    }
			    else 
			    {
			    	printf("e is gretaer");
				}
			
			}
			else
			{
			    if(b>c)
			    {
			    	if(b>d)
			    	{
			    		if(b>e)
			    		{
			    			printf("b is greater");
						}
						else
						{
							printf("e is greater");
						}
					}
					else
					{
						printf("d is greater");
					}
				}
				else
				{
					printf("c is greater");
			    }
			    	
			}
	   }
	   else 
	   {
	   	  if(c>d)
	   	  {
	   	      if(c>e)
				 {
				 	printf("c is greater");
				 }
				 else
				 {
				 	printf("e is greater");
				 }
				 	
		  }
		  else 
		  {
		  	printf("d is greater");
		  }
		  
		  
	   }
   }
   else 
   {
   	if(d>e)
   	 {
   		printf("d id gretaer");
     }
     else
     {
     	printf("e is greater");
	 }
   }
	return 0;

}
