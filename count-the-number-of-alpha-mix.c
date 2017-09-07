#include <stdio.h>
 int main()
{
   char s[100];
   int  i,c[26] = {0};
 
   printf("Enter a string\n");
   gets(s);
 
   for(i=0;s[i];i++)
   {
 
      if (s[i]>='A'&&s[i]<='Z') 
         {
		    c[s[i]-'A']++;
         }
		 else if(s[i]>='a'&&s[i]<='z')
         {
		    
             c[s[i]-'a']++;
         }
 
      
   }
 
   for (i = 0; i < 26; i++)
   {//sleep(1);
        if(s[i]>='A'&&s[i]<='Z')
         {
		    if (s[i]>= 0)
            printf("%c = %d times\n",i+'A',c[i]);
        }
		else if(s[i]>='a'&&s[i]<='z')
         {
         	if (s[i]>= 0)
         	  printf("%c = %d times \n",i+'a',c[i]);
		 }
		 
   }
 
   return 0;
}
