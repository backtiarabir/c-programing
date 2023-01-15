#include<stdio.h>
int f(int x)
{
    int value;
    value = x*x*+3*x+5;
    return value;
}
int main()
{
    int x;
    scanf("%d",&x);
    int value;
    value = f(x);
    printf("Result :%d", value);
    return 0;
}
