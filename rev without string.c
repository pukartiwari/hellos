#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20];
int count=0,i=0,x;
printf("enter the name");
gets(a);
x=strlen(a);
for(i=x-1;i>=0;i--)
{


printf("%c",a[i]);
}
}
