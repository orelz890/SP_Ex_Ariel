#include "NumClass.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(){
int x;
int y;
while(scanf("%d%d",&x,&y)!=2){
    char c;
    scanf("%c",&c);
}
int min = x < y? x:y;
int max = x > y? x:y;
printf("The Armstrong numbers are:");
for (int i = min; i < max ; i++)
{
   if (isArmstrong(i)==1)
   {
       printf(" %d",i);
   }
}
printf("\nThe Palindromes are: ");
for (int i = min; i < max ; i++)
{
   if (isPalindrome(i)==1)
   {
       printf(" %d",i);
   }
}

printf("\nThe Prime numbers are: ");
for (int i = min; i < max ; i++)
{
   if (isPrime(i)==1)
   {
       printf(" %d",i);
   }
}

printf("\nThe Strong numbers are: ");
for (int i = min; i < max ; i++)
{
   if (isStrong(i)==1)
   {
       printf(" %d",i);
   }
}

return 0;
}