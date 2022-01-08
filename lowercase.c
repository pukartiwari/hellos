#include<conio.h>
#include<stdio.h>
void main()
{

char a[20];
int x,i;
printf("enter the name");
gets(a);
i=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='A'&&a[i]<='Z')
{
a[i]=a[i]+32;

}
}
printf("lowercase into uppercase is");
puts(a);
getch();
}
