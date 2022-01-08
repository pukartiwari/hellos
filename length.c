#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100];
int len;
printf("enter the name");
gets(a);
len=strlen(a);
printf("the length of the name is %d",len);
}
