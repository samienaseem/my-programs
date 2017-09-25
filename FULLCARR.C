#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{

  int gdriver=DETECT,gmode=0,i,j;
  initgraph(&gdriver,&gmode,"");
  for(i=0;i<200;i++)

  {                 for(j=0;j<3;j++)
  {
 cleardevice();
  rectangle(100+i,100+j,300+i,200+j);
 rectangle(300+i,150+j,400+i,200+j);
 rectangle(100+i,150+j,50+i,200+j);
 line(100+i,150+j,150+i,100+j);
 line(300+i,150+j,250+i,100+j);
 line(400+i,200+j,350+i,150+j);
 line(300+i,150+j,100+i,150+j);
 line(200+i,100+j,200+i,200+j);
 circle(100+i,210+j,30);
 circle(100+i,210+j,20);
 circle(300+i,210+j,30);
 circle(300+i,210+j,20);
 line(0,240,700,240);



  delay(10);
  }
  }
 // circle(


  getch();
  closegraph();
  }

