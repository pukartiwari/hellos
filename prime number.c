#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=2,prime=0,sum=0;
printf("enter the  number");
scanf("%d",n);
for(i=2;i<=n;i++)
if(n%i==0)
{
prime=1;
break;
}
if(prime==1)
{
printf("the number is prime number");

}
sum=sum+i;

printf("the sum of prime number is %d",sum);
getch();
}

