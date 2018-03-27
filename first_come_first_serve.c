#include<stdio.h> 
int main() 
{ 
  int n,avwt=0,avtat=0,i,j;  
  printf("Enter total number of processes :"); 
  scanf("%d",&n);
  int bt[n],wt[n],tat[n];
  printf("\nEnter Process Burst Time\n"); 
  for(i=0;i<n;i++) 
  {   
    printf("P[%d]:",i+1); 
    scanf("%d",&bt[i]); 
  } 
  wt[0]=0; 
   for(i=1;i<n;i++) 
   { 
     wt[i]=0; 
     for(j=0;j<i;j++) 
      wt[i]+=bt[j]; 
   } 
   printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time"); 
//calculating turnaround time 
   for(i=0;i<n;i++) 
   { 
      tat[i]=bt[i]+wt[i]; 
      avwt+=wt[i]; 
      avtat+=tat[i]; 
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]); 
   }  
   avwt/=i; 
   avtat/=i; 
   printf("\n\nAverage Waiting Time:%d",avwt); 
   printf("\nAverage Turnaround Time:%d",avtat); 
   return 0; 
} 
