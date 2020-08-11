#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <DOS.h>

void boundary_fill(int x, int y, int color, int boundary){
	if(getpixel(x,y)!=boundary && getpixel(x,y)!=color){
		putpixel(x,y,color);
		delay(5);
		boundary_fill(x-1,y,color,boundary);
		boundary_fill(x,y-1,color,boundary);
		boundary_fill(x+1,y,color,boundary);
		boundary_fill(x,y+1,color,boundary);
	}
}
int main(void)
{
   int gdriver = DETECT, gmode = EGAHI, errorcode;
   int bkcol, maxcolor, x, y;
   char msg[80];
   initgraph(&gdriver, &gmode, "..\\BGI");

   line(50,50,80,80);
   line(80,80,50,80);
   line(50,80,50,50);

   boundary_fill(55,65,8,15);
   getch();
   f	closegraph();
   return 0;
}

