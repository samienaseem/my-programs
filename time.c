#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<conio>
using namespace std;
int main() {
	int hour=0,min=0,sec=0;
	
	while(1) {
	clrscr();
	printf("%d : %d : %d",hour,min,sec);
	fflush(stdout);
	sec++;
	
	if(sec==60) {
		min=min+1;
		sec=0;
		
	}
	if(min==60) {
		hour=hour+1;
		min=0;
	}
	if(hour==24) {
		hour=0;
		min=0;
		sec=0;
	}
	sleep(1);
}
	
	
}
