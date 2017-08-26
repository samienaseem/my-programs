#include<stdio.h>
int alpha(char ch)
{
	for(ch=65;ch<=90;ch++)
	{
		
		
		
		printf("    %c    ",       ch   );
	    
	}
	printf("\n");
}
int small(char c)
{
	printf("\n");
	for(c=97;c<=122;c++)
	{
		printf("   %c   ",   c   );
	}
}
int main()
{   
    char ch,c;
	alpha(ch);
	small(c);
}
