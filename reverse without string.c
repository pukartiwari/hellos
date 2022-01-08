#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[20];
int i,x;
printf("enter the name");
gets(a);
x=strlen(a);


for(i=20;i>=0;i--)
{
    printf("%c the reverse is ",a[i]);

}
return 0;
}
