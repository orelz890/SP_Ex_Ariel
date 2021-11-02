#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPrime(int x){
    if (x<2)
    {
        return 0;
    } 
    for (int i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            return 0;
        }   
    }
    return 1;
}

int isStrong(int x){
    int flag =0;
    int temp = x;
    int len =0;
    if (x<1)
    {
        return 0;
    }
    while (temp!=0)
    {
        temp = temp/10;
        len++;
    }
    temp = x;
    for (int i = len-1; i >= 0; i--)
    {
        int div = (int)pow(10,i);
        flag += factorial((temp/div));
        temp = (temp%div);
        if (flag > x)
        {
            return 0;
        }
        
    }
    if (flag == x)
    {
        return 1;
    }
    
    return 0;
}
int factorial(int x){
    if (x==0)
    {
        return 1;
    }
    return x * factorial(x-1);
}

