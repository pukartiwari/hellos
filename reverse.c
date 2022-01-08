#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
printf("enter the first and second strings");
gets(a,b);
strcat(a,b);
puts(a);
getch();
}
