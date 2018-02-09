#include<stdio.h>
int main() {
	char another;
	int num;
	do {
		printf("enter the number\n");
		scanf("%d",&num);
		printf("square of %d is %d",num,num*num);
		printf("want to enter another number\n");
		fflush(stdin);
		scanf("%c",&another);
	} while(another=='y');
	
}
