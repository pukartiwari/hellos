#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20],b[30];
printf("enter the name ");
gets(a);
printf("enter the second name");
gets(b);
strcpy(b,a);
printf("after copying the name is %s",b);
}
