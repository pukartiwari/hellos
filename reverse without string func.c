#include<conio.h>
#include<stdio.h>
void main()
{

char a[20];
int x,i,count=0;
printf("enter the name");
gets(a);
x=count++;
for(i=x-1;a[i]!='\0';i--)

{
printf("%c",a[i]);
}
getch();
}
