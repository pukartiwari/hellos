#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20];
printf("enter the name");
gets(a);
strrev(a);
printf("the reverse is %s",a);
}
