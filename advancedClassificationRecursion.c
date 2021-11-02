#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPalindrome(int x){
    int len = length(x)-1;
    int temp = x;
    return isPalindromeHelper(temp,len);
}
int isPalindromeHelper(int temp,int i){
    if (i < 1)
    {
        return 1;
    }
    int curr =temp;
    int tempJ = temp/((int)pow(10,i));
    int tempI = temp%10;
    if (tempJ != tempI)
    {
        return 0;
    }
    curr = temp % ((int)pow(10,i));
    curr = curr/10;
    return isPalindromeHelper(curr,i-2);

}
int length(int x){
    if (x <= 0 )
    {
        return 0;
    }
    return 1 + length(x/10);
}
int isArmstrong(int x){
    int len = length(x);
    return isArmstrongHelper(x,x, len ,len-1,0);
}
// In this func I prefered time complexity over space preserving becouse the number can be huge from the begining
int isArmstrongHelper(int x, int currX , int len , int i, int cal){
    if ((cal > x) || ((i < 0) && (cal < x)))
    {
        return 0;
    }
    else if (i < 0 && cal == x)
    {
        return 1;
    }
    int temp = currX/((int)pow(10,i));
    int currCal = cal + ((int)pow(temp,len));
    int curr = currX%((int)pow(10,i));
    return isArmstrongHelper(x,curr,len,i-1,currCal);
}