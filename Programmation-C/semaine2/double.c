#include<stdio.h>

int doubler(int x1) 
{
    x1= x1*2;
    return x1;
}

int main() 
{
    //DV
    int x=5;
    int res;
    // function
    res = doubler(x);
    return 0;
}