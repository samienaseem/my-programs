#include <graphic>
#include <conio.h>
 using namespace std;
main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   line(100, 100, 200, 200);
 
   getch();
   closegraph();
   return 0;
}
