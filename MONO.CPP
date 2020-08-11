#include<stdio.h>
#include<iostream.h>
#include<conio.h>
char a[30],b[30];

/*
void encrypt(char p[],int key)
{

}*/
void main()
{
 clrscr();
 char plain[30],cipher[30];
 cout<<"enter the plain text:";
 cin>>plain;
 int i;
 char a[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 char b[30]={'f','j','n','b','r','c','q','d','x','s','a','g','p','w','k','h','l','i','z','o','y','m','e','t','v','u'};
 for(i=0;plain[i]!='\0';i++)
 {
	for(int j=0;j<26;j++)
	{
		if(plain[i]==a[j])
		{
			cipher[i]=b[j];
		}
	}
 }
 cipher[i]='\0';
 cout<<"encrypted Text is: -"<<endl;
 puts(cipher);
  for(i=0;cipher[i]!='\0';i++)
 {
	for(int j=0;j<26;j++)
	{
		if(cipher[i]==b[j])
		{
			plain[i]=a[j];
		}
	}
 }
 cipher[i]='\0';
 cout<<"decrypted Text is: -"<<endl;
 puts(plain);
 getch();
}