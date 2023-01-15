#include<stdio.h>
int f(int x, int y)
{
    int value;
    value = x*x+x*y-9;
    return value;
}
int main()
{
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    int value;
    value = f(x,y);
    printf("Result :%d", value);
    return 0;
}
