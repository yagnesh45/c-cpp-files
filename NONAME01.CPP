#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <DOS.h>

int main(void)
{
   int gdriver = DETECT, gmode = EGAHI, errorcode;
   int bkcol, maxcolor, x, y;
   char msg[80];
   char *str = "This text is going to be automatically written!";

   initgraph(&gdriver, &gmode, "..\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   maxcolor = getmaxcolor();

   settextjustify(CENTER_TEXT, CENTER_TEXT);
   x = getmaxx() / 2;
   y = getmaxy() / 2;

   for(int i=0;str[i]!='\0';i++){
	delay(200);
	printf("%c",str[i]);
   }
   for (bkcol=0; bkcol<=maxcolor; bkcol++)
   {
      cleardevice();

      setbkcolor(bkcol);

      if (bkcol == WHITE){
	 setcolor(EGA_BLUE);
      }
      sprintf(msg, "Background color: %d", bkcol);
      outtextxy(x, y, msg);
      delay(500);
//      getch();
   }

   closegraph();
   return 0;
}

