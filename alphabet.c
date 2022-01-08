#include<stdio.h>
#include<string.h>
int main()
{
char ch;
printf("Enter your character: ");
scanf("%c",&ch);

if(ch>=65 && ch<=90){
printf("The entered character is in uppercase. So,converting it to lowercase: ");

printf("%c",tolower(ch));
}
else if(ch>=97 && ch<=122)
{
printf("The entered character is in lowercase. So,converting it to uppercase: ");
printf("%c",toupper(ch));
}
else
{
printf("It is not a character");
}
}
