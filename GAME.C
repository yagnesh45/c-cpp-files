#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

int gd,gm,i,x=150,y=105,n;
int e_cox=400,e_coy=100,h_cox=100,h_coy=100;
char ch;

void hero(int,int,int);
void enemy(int,int,int);
void move();
void h_fire();
void e_fire();

void main()
{
initgraph(&gd,&gm,"..\\bgi");
move();
}

void move()
{
printf("Press Space or Backspace to Fire");
outtextxy(getmaxx()/2-150,getmaxy()-18,"W=Up     A=Left     S=Down     D=Right");
ch=getch();

while(ch!=27)
{
	if(ch=='w')
		{
			cleardevice();
			h_coy=h_coy-10;

			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='a')
		{
			cleardevice();
			h_cox=h_cox-10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='s')
		{
			cleardevice();
			h_coy=h_coy+10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='d')
		{
			cleardevice();
			h_cox=h_cox+10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}

	else if(ch=='i')
		{
			cleardevice();
			e_coy=e_coy-10;

			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='j')
		{
			cleardevice();
			e_cox=e_cox-10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='k')
		{
			cleardevice();
			e_coy=e_coy+10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}
	else if(ch=='l')
		{
			cleardevice();
			e_cox=e_cox+10;
			enemy(e_cox,e_coy,15);
			hero(h_cox,h_coy,15);
		}

	if(ch=='\b')
		{
			e_fire();
		}


	if(ch==' ')
		{
			h_fire();
		}
ch=getch();
}
}

void h_fire()
{
	int prev=0;


	if(e_cox>h_cox)
	{
	x=h_cox+20;
	while(x+7!=getmaxx())
	{
		enemy(e_cox,e_coy,15);
		hero(h_cox,h_coy,15);
		n=getpixel(x+8,h_coy);
		if(n==0)
		{
			cleardevice();
			x++;
			line(x,h_coy,x+7,h_coy);
			delay(1.5);;
		}
		else if(n==15)
		{
			enemy(e_cox,e_coy,12);
			sound(2000);
			delay(300);
			nosound();
			outtextxy(getmaxx()/2-50,450,"Killed");
			break;
		}
	}
	}

	else{
	x=h_cox-20;
	while(x-7!=0)
	{

		enemy(e_cox,e_coy,15);
		hero(h_cox,h_coy,15);
		n=getpixel(x-8,h_coy);
		if(n==0)
		{
			cleardevice();
			x--;
			line(x,h_coy,x-7,h_coy);
			delay(1.5);;
		}
		else if(n==15)
		{         hero(h_cox,h_coy,12);

			sound(2000);
			delay(300);
			nosound();
			outtextxy(getmaxx()/2-50,450,"Killed");
			break;
		}
	}
	}
}

void e_fire()
{
	if(e_cox < h_cox)
	{
	x=e_cox+20;
	while(x+7!=getmaxx())
	{
		enemy(e_cox,e_coy,15);
		hero(h_cox,h_coy,15);
		n=getpixel(x+8,h_coy);
		if(n==0)
		{
			cleardevice();
			x++;
			line(x,e_coy,x+7,e_coy);
			delay(1.5);;
		}
		else if(n==15)
		{
			enemy(e_cox,e_coy,12);
			sound(2000);
			delay(300);
			nosound();
			break;
		}
	}
	}

	else{
	x=e_cox-20;
	while(x-7!=0)
	{
		enemy(e_cox,e_coy,15);
		hero(h_cox,h_coy,15);
		n=getpixel(x-8,e_coy);
		if(n==0)
		{
			cleardevice();
			x--;
			line(x,e_coy,x-7,e_coy);
			delay(1.5);;
		}
		else if(n==15)
		{         hero(h_cox,h_coy,12);

			sound(2000);
			delay(300);
			nosound();
			break;
		}
	}
	}
}




void hero(int e_cordix,int e_cordiy,int color)
{
setcolor(color);
circle(e_cordix,e_cordiy-25,20);            //face
circle(e_cordix-6,e_cordiy-28,2);           //eye
circle(e_cordix+6,e_cordiy-28,2);           //eye
line(e_cordix-3,e_cordiy-18,e_cordix+3,e_cordiy-18);        //mouth
rectangle(e_cordix-25,e_cordiy,e_cordix+25,e_cordiy+100);   //body
line(e_cordix-10,e_cordiy+100,e_cordix-15,e_cordiy+150);    //lleg
line(e_cordix+10,e_cordiy+100,e_cordix+15,e_cordiy+150);    //rleg
}
void enemy(int e_cordix,int e_cordiy,int color)
{
setcolor(color);
circle(e_cordix,e_cordiy-25,20);            //face
circle(e_cordix-6,e_cordiy-28,2);           //eye
circle(e_cordix+6,e_cordiy-28,2);           //eye
line(e_cordix-3,e_cordiy-18,e_cordix+3,e_cordiy-18);        //mouth
rectangle(e_cordix-25,e_cordiy,e_cordix+25,e_cordiy+100);   //body
line(e_cordix-10,e_cordiy+100,e_cordix-15,e_cordiy+150);    //lleg
line(e_cordix+10,e_cordiy+100,e_cordix+15,e_cordiy+150);    //rleg
}