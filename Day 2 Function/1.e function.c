#include<stdio.h>
int f(int x, int y,int z)   /*prototytpe*/
{
    int value;
    value = x*x+2*y*z-z*z;   /*defination*/
    return value;
}
int main()
{
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int value;
    value = f(x,y,z);      /* function call */
    printf("Result :%d", value);
    return 0;
}

