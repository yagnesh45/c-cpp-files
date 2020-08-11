#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
  clrscr();
  int temp1=0,temp2=0;
  char key[5][5]={{'e','x','a','m','i'},{'n','t','o','b','c'},{'d','f','g','h','k'},{'l','p','q','r','s'},{'u','v','w','y','z'}};
  char plain[30];
  char cipher[30];
  cout<<"PlayFair Key:"<<endl;
  for(int t=0;t<5;t++)
  {
    for(int j=0;j<5;j++)
    {
      cout<<key[t][j]<<"\t";
    }
    cout<<"\n";
  }
  cout<<"Enter the plain text:";
  cin>>plain;

  for(int i=0,k=0;plain[i]!='\0',k<5;i++,k++)
  {
    for(int j=0;plain[j]!='\0';j++)
    {
      if(key[k][j]==plain[i])
      {
	temp1=i;
	temp2=j;
	cout<<endl<<plain[i]<<":"<<temp1<<" "<<temp2;
      }
    }
  }
  getch();
}