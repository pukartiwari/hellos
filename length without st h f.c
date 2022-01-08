 #include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[50];
int count=0,i=0;
printf("enter the name ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
count ++;
}
//count=count+1;
printf("the length of such string is %d",count);
getch();
}
