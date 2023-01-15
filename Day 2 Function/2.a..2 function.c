#include<stdio.h>
int f(int x)
{
if(x==0)
return 0;
int val;
val = x+ f(x-1);
return val;
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
