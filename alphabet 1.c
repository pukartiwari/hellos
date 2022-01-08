#include<stdio.h>
int main()
{
char a;
printf("enter a character");
scanf("%c",&a);
if(a>='a' && a<='z')
{
a=a-32;
printf("it is uppercase %c",a);
}
else if(a>='A' && a<='Z')
{
a=a+32;
printf("it is lowercase %c",a);
}
else
{
printf("invalid input");
}
return 0;
}
