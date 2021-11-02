#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPalindrome(int x){
    int len = length(x);
    int temp = x;
    for (int j = len-1; j>0 ; j=j-2)
    {
        int tempJ = temp/((int)pow(10,j));
        int tempI = temp%10;
        temp = temp % ((int)pow(10,j));
        temp = temp/10;
        if (tempI != tempJ)
        {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int x){
    int len = length(x);
    int cal = 0;
    int curr =x;
    for (int i = len-1; i >= 0; i--)
    {
        int temp = curr/((int)pow(10,i));
        cal += ((int)pow(temp,len));
        curr = curr%((int)pow(10,i));
        if (cal > x)
        {
            return 0;
        }   
    }
    if (cal != x)
    {
        return 0;
    }
    return 1;
}
int length(int x){
    int temp =x;
    int len = 0;
     while (temp!=0)
    {
        temp = temp/10;
        len++;
    }
    return len;
}
