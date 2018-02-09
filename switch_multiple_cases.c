#include<stdio.h>
int main() {
	char ch;
	printf("enter any one of the alphabets\n");
	scanf("%c",&ch);
	
	switch(ch) {
		case 'a':
		case 'A':
			printf("a as in areeba\n");
			break;
		case 's':
		case 'S':
			printf("s as in samar\n");
			break;
		default:
			printf("try again\n");
	}
	}
