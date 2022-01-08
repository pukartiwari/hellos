#include<stdio.h>
#include<conio.h>
void main()
{
char a;

    printf("enter a character");
    printf("%c",&a);
if(a>='A'&&a<='Z')
{
    printf("%c uppercase",a);
}
else if(a>='a'&&a<='z')
{

printf("%c the lowercase is",a);
}
else
{
    printf("is not valid");
}
getch();
}
