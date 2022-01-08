#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i=0,x;
printf("enter the name");
gets(a);
x=strlen(a);
for(i=0;a[i]!='\0';i++)
if(a[i]>x)
{
x=a;
a=b;
b=x;
}
printf("%d",a[i]);
}
