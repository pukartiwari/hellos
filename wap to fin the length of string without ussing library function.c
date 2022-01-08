#include<stdio.h>
#include<conio.h>
#include<string.h>
int strlength(char[])
void main()
{
char a[100];
int len;
printf("enter the name");
gets(a);
len=strlen(a);
puts(len);
}
int strlength(char x[])
{
int i=0,count=0;
while(x[i]!='\0')
{
count++;
i++;
}
return count;
}
