#include<stdio.h>
int main()
{
	char s[100];//s2[100];
	int l=0,i,c=0,w=0;
	printf("enter the string : ");
	// for(i=0;i<20;i++)
	 gets(s);
	 for(i=0;s[i];i++)
	 {
	 	if(s[i]==' ')
	 	{
		 c++;}
		
		 l++;
		 
	 }
	 s[i]='\0';
//	printf("%d\n",l);
//	 printf("%d\n",c);
w=l+(2*c);
	  char s2[w];
	// printf("%d",s2);
//	for(i=l;i>0;i--)
//int r=0,p=0;
    
	 while(l>0)
	 {
	 
		if(s[i]==' ')
		{
			s2[w--] = '%';
			s2[w--] = '2';
			s2[w--] = '0';		//	r++;
		}
		else
		{
			s2[w--]=s[i];
		}
		l--;
	}
	s2[w]='\0';
       /// printf("%d\n",r);
        //printf("%d",p);
        printf(s2);
}
