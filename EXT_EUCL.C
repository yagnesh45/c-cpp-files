#include<stdio.h>
#include<conio.h>
void ext_euclid(int,int);
main()
{
   int a,b;
   clrscr();

   printf("\n--------------------");
   printf("\nr1 should be > r2");
    printf("\n-------------------");
   printf("\nEnter the value of r1:");
   scanf("%d",&a);
   printf("Enter the value of r2:");
   scanf("%d",&b);
   ext_euclid(a,b);
   getch();
}
void ext_euclid(int r1,int r2)
{
   int q,r,a=r1,b=r2;
   int s1=1,s2=0,t1=0,t2=1,s,t;

   printf("q\tr1\tr2\tr\ts1\ts2\ts\tt1\tt2\tt\n");
   printf("----------------------------------------------------------------------------\n");
   while(r2!=0)
   {
      q=r1/r2;
      r=r1%r2;
      printf("%d\t%d\t%d\t%d\t",q,r1,r2,r);
      s=s1-q*s2;
      printf("%d\t%d\t%d\t",s1,s2,s);
      s1=s2;
      s2=s;
      t=t1-q*t2;
      printf("%d\t%d\t%d\n",t1,t2,t);
      t1=t2;
      t2=t;
      r1=r2;
      r2=r;
   }
   printf("\t%d\t%d\t\t%d\t\t\t%d",r1,r2,s1,t1);
   printf("\nGCD(%d,%d)=%d",a,b,r1);
   printf("\nRelationship: s x a + t x b=gcd(a,b)\n");
   printf("\n%d x %d + %d x %d = %d\n",s1,a,t1,b,r1);
   if(r1==1)
   {
      if(t1>0)
        printf("\nMultiplicative Inverse is %d",t1);
      else
        printf("\nMultiplicative Inverse is %d or %d",t1,a+t1);
   }
   else printf("\nMultiplicative Inverse does not exist.");
}
