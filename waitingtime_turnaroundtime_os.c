#include<stdio.h>
int main()
{ int burstime[10],process[10],priority[10],wt[10],tat[10],n,temp,i,j,total=0,average_wt,average_tat;                    
  printf("Enter the Total Number Of Process : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nprocess[%d]\n",i+1);
    printf("Burst Time : ");
    scanf("%d",&burstime[i]);
    printf("Priority : ");
    scanf("%d",&priority[i]);
    process[i]=i+1;
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     if(priority[i]>priority[j])
      {
		temp=priority[j];
		priority[j]=priority[i];
		priority[i]=temp;

		temp=burstime[j];
		burstime[j]=burstime[i];
		burstime[i]=temp;

		temp=process[j];
		process[j]=process[i];
		process[i]=temp;
      }
   }
   //waiting time 
    wt[0]=0;
   for(i=1;i<n;i++) {
   	wt[i]=0;
   	for(j=0;j<i;j++) {
   		wt[i]=wt[i]+burstime[j];
   		 total=total+wt[i];
	   }
   }
    average_wt=total/n;
    
    
   // turnaround time
   total=0;
   for(i=0;i<n;i++) {
   	tat[i]=wt[i]+burstime[i];
	   total=tat[i];                                                                                                            
   }
   average_tat=total/n;
    
   printf("Process\t   Burst Time\t   Priority\t   Waiting Time\t   TurnAround Time\t");
   for(i=0;i<n;i++)
   {
     printf("\np[%d]\t\t   %d\t\t %d\t\t   %d\t\t   %d",process[i],burstime[i],priority[i],wt[i],tat[i]);
   }
   printf("\nAverage waiting Time = %d \n",average_wt);
   printf("Average Turn Around Time = %d",average_tat);
   
getch();
}
