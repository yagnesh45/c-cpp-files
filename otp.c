/*Program for One-Time Pad Implementation*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void decrypt(unsigned char []);

void encrypt(unsigned char pt[])
{
    unsigned char ct[50],key;
    int i,len,tkey;
    FILE *fp;

    //Length of Plaintext
	for(len=0;pt[len]!='\0';len++);

	fp=fopen("KEY.txt","w");
	for(i=0;i<len;i++)
    {
		tkey=rand()%26;
		ct[i]=pt[i]+tkey;
		if(ct[i]>'z')
			ct[i]-=26;
		key=(unsigned char)(tkey+97);
		putc(key,fp);
    }
	ct[i]='\0';
	printf("\nCipher Text:%s",ct);
	fclose(fp);
	decrypt(ct);
}
void decrypt(unsigned char ct[])
{
	unsigned char p[50],ch;
	char d;
	int i,len,tkey;
	FILE *fptr;
	for(len=0;ct[len]!='\0';len++);

	if((fptr=fopen("KEY.txt","r"))==NULL)
	{
		printf("No file for KEY is found");
		getch();
		exit(0);
	}
	printf("\n\nThe key is::");
	while((d=getc(fptr))!=EOF)
	   printf("%c",d);
	fclose(fptr);
	fptr=fopen("KEY.txt","r");
	for(i=0;i<len;i++)
	{
		ch=getc(fptr);
		tkey=(int)(ch-97);
		p[i]=ct[i]-tkey;
		if(p[i]<'a')
			p[i]+=26;
	}
	p[i]='\0';
	printf("\n\nDecrypted text::%s",p);
	fclose(fptr);
}
void main()
{
	unsigned char pt[50];
	int i;
	printf("Enter Plaintext::");
	scanf("%s",pt);
	encrypt(pt);
	getch();
}
