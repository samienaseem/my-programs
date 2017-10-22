#include<stdio.h>
#include<string.h>
int main()
{
	int cs;
	char ch[20];
	char ch2[10]="LOAD";
	char ch3[10];
	char ch4[10],ch5[10];
	int a,b,c,i=0;
	scanf("%s",ch);
	cs=getch();
	
	
	 if(strcmp(ch,ch2)==0&&cs==61)
    	{
    		if(cs==61)
    		{
		printf("A =");
		scanf("%d",&a);
	}
}
		scanf("%s",ch4);
		if(strcmp(ch,"LOAD")==0)
		{
	//	printf("enter");
		scanf("%d",&b);
		
	}
	scanf("%s",ch3);
	if(strcmp(ch3,"ADD")==0)
	{
		c=a+b;
	}
	scanf("%s",ch5);
	if(strcmp(ch5,"RUN")==0)
	printf("%d",c);
	
}
