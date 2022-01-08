#include<stdio.h>
#include<conio.h>
void main()
{
char num[100];
int i,vow=0,cons=0,space=0;
printf("enter a name");
gets(num);
i=0;
while(num[i]!='\0')
if((num[i]>=65 && num[i]<=90)||(num[i]>=97 && num[i]<=122))
{
if(num[i]=='a'|| num[i]=='e'||num[i]=='i'||num[i]=='o'||num[i]=='u'||
num[i]=='A'||num[i]=='E'||num[i]=='I'||num[i]=='O'||num[i]=='U')


vow++;
cons++;

i++;
}
printf("the vowel=%d and consonent =%d\n",vow,cons);
getch();
}
