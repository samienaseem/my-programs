#include<stdio.h>
int main()
{
	char c[20];
	int i;// s[26]={0};
	printf("enter the elements of string");
	scanf("%s",&c);
	for(i=0;c[i];i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
		{
		//	s[c[i]]++;
		printf("%s",c[i]);
		}
	}
/*	for(i=0;i<26;i++)
	{
		if(s[i]!=0)
		{
			printf("%c occour %d ties",c[i],i);
		}
	}*/
}
