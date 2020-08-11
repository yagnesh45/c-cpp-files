#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>
int graDriver=DETECT,graMode;
int n,xs[100],ys[100],i,xinc,yinc,xp,yp,degree;
float sfx,sfy,radian,shearXfactor,shearYfactor;
int tempYaxis,tempXaxis;

float degToRad()
{
radian=(float)degree*3.14f/180;
return radian;
}

void DrawFn()
{
for(i=0;i<n;i++)
 {
 line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
 }
}

void translate()
{
for(i=0;i<n;i++)
 {
 xs[i]+=xinc;
 ys[i]+=yinc;
 }
setcolor(BLUE);
}

void rotation()
{
float sinrad,cosrad,t,u;
for(i=0;i<n;i++)
 {
 sinrad=sin(radian);
 cosrad=cos(radian);
 t=(ys[i]-yp);
 u=(xs[i]-xp);
 xs[i]=xp+(int)floor(u*cosrad-t*sinrad);
 ys[i]=yp+(int)floor(u*sinrad+t*cosrad);
 }
setcolor(RED);

}
void scaleFn()
{
for(i=0;i<n;i++)
 {
 xs[i]=xs[0]+(int)((float)(xs[i]-xs[0])*sfx);
 ys[i]=ys[0]+(int)((float)(ys[i]-ys[0])*sfy);
 }
setcolor(GREEN);
}
void shearAlongX()
{
for(i=0;i<n;i++)
 {
 xs[i]=xs[i]+shearXfactor*ys[i];
 }
setcolor(BROWN);
}

void shearAlongY()
{
for(i=0;i<n;i++)
 {
 ys[i]=ys[i]+shearYfactor*xs[i];
 }
setcolor(YELLOW);
}

void FlipV()
{
tempXaxis=getmaxy()/2;
for(i=0;i<n;i++)
 {
 ys[i]=tempXaxis+(tempXaxis-ys[i]);
 }
for(i=0;i<getmaxx();i++)
 {
 putpixel(i,tempXaxis,12);
 }
setcolor(WHITE);
}

void FlipH()
{
tempYaxis=getmaxx()/2;
for(i=0;i<n;i++)
 {
 xs[i]=tempYaxis+(tempYaxis-xs[i]);
 }
for(i=0;i<getmaxy();i++)
 {
 putpixel(tempYaxis,i,14);
 }
setcolor(BLUE);
}

void main()
{
int ch;
printf("Enter number of sides: ");
scanf("%d",&n);
printf("Enter co-rdinates: x,y for each point ");
for(i=0;i<n;i++)
 scanf("%d%d",&xs[i],&ys[i]);

//flipping horizontally
initgraph(&graDriver,&graMode,"..\\BGI");
cleardevice();
setcolor(4);
DrawFn();//original
/*FlipV();
DrawFn();//vertical flip
FlipH();
DrawFn();//Horizontal flip
*/
do{
	cout<<"1. Translate\n2. Scaling\n3. Rotation\n4. shear\n-1.exit\n Enter your choice:";
	cin>>ch;

	switch(ch){
		case 1:printf("Enter x,y increment for translation: ");
		       scanf("%d%d",&xinc,&yinc);
		       translate();
		       DrawFn();//shifti
		break;
		case 2:printf("Enter scale factors: (xs,ys) ");
		       scanf("%f%f",&sfx,&sfy);
		       scaleFn();
		       DrawFn();//scaling
		break;
		case 3:printf("Enter rotation angle");
		       scanf("%d",&degree);
		       printf("degree: %d",degree);
		       degToRad();
		       printf("radian: %f",radian);
		       printf("Enter pivot co-co-ordinates:");
		       scanf("%d%d",&xp,&yp);
		       xp+=xinc;
		       yp+=yinc;
		       rotation();
		       DrawFn();
		break;
		case 4:printf("Enter x shear factor:");
		       scanf("%f",&shearXfactor);
		       printf("Enter y shear factor:");
		       scanf("%f",&shearYfactor);
		       shearAlongX();
		       DrawFn();
		       shearAlongY();
		       DrawFn();
		       break;
	}
}while(ch!=-1);

getch();
}