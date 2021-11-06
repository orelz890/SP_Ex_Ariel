#include "NumClass.h"
#include <stdio.h>

int main(){
int x=-1;
int y=-1;
do
{
if(x<0){
    scanf("%d",&x);
    char c;
    scanf("%c",&c);}
if(y<0){
    scanf("%d",&y);
    char c;
    scanf("%c",&c);}
} while (x<=0 || y<=0);

int min = x < y? x:y;
int max = x > y? x:y;
printf("The Armstrong numbers are:");
for (int i = min; i <= max ; i++)
{
   if (isArmstrong(i)==1)
   {
       printf(" %d",i);
   }
}
printf("\nThe Palindromes are:");
for (int i = min; i <= max ; i++)
{
   if (isPalindrome(i)==1)
   {
       printf(" %d",i);
   }
}

printf("\nThe Prime numbers are:");
for (int i = min; i <= max ; i++)
{
   if (isPrime(i)==1)
   {
       printf(" %d",i);
   }
}

printf("\nThe Strong numbers are:");
for (int i = min; i <= max ; i++)
{
   if (isStrong(i)==1)
   {
       printf(" %d",i);
   }
}
printf("\n");
return 0;
}