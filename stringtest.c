#include<stdio.h>
int main()
{
	char name[10];
	int i,alfa=0;
	printf("enter the string");
	scanf("%s",&name);
//	printf(" the given string is=%s",name);
for(i=0;name[i];i++)
//printf("%d",name[i]);
 if(name[i]>='A'&&name[i]<='Z')
 {
 	printf("%c",name[i]);
 	alfa++;
 }
 printf("the nuber of character=%d",alfa);
}
