#include <stdio.h>
 int main()
{
   char s[100];
   int  i,c[26] = {0};
 
   printf("Enter a string\n");
   scanf("%s",s);
 
   for(i=0;s[i];i++)
   {
 
      if (s[i]>='A'&&s[i]<='Z') 
         c[s[i]-'A']++;
 
      
   }
 
   for (i = 0; i < 26; i++)
   {//sleep(1);
         if (s[i]>= 0)
         printf("%c = %d times\n",i+'A',c[i]);
      /*   else
         {
         	  printf("%c = %d times \n",i+'A',c[i]);
		 }*/
		 
   }
 
   return 0;
}
