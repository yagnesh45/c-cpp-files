#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <DOS.h>

void flood_fill(int x, int y, int oldcolor, int newcolor){
	if(getpixel(x,y)==oldcolor){
		putpixel(x,y,newcolor);
		delay(5);
		flood_fill(x-1,y,oldcolor,newcolor);
		flood_fill(x,y-1,oldcolor,newcolor);
		flood_fill(x+1,y,oldcolor,newcolor);
		flood_fill(x,y+1,oldcolor,newcolor);
		flood_fill(x-1,y+1,oldcolor,newcolor);
		flood_fill(x+1,y+1,oldcolor,newcolor);
		flood_fill(x+1,y-1,oldcolor,newcolor);
		flood_fill(x-1,y-1,oldcolor,newcolor);
	}
}
int main(void)
{
   int gdriver = DETECT, gmode = EGAHI, errorcode;
   int bkcol, maxcolor, x, y;
   char msg[80];
   initgraph(&gdriver, &gmode, "..\\BGI");

   /* read result of initialization */
   line(50,50,80,80);
   line(80,80,50,80);
   line(50,80,50,50);

   flood_fill(55,65,0,4);
   getch();
   closegraph();
   return 0;
}

