#include<stdio.h>

// procedure 
void calculer(int x, int y, int z, int *r)
{
    *r = x * y * z;
}

int main(int r)
{
    //DDV
    int x1 = 5;
    int y2 = 10;
    int z3 = 15;
    int res;
    // function
   calculer(x1,y2,z3,&res);
    printf("The result is: %d\n", res);
    return 0;
}
