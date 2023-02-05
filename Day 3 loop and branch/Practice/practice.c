#include<stdio.h>
int funcAdd(int i)
{
    int sum =0;
    if(i<=5)
    {
        sum =funcAdd(i+1)+i;
    }
    return sum;
}
int main()
{
    int sum = funcAdd(1);
    printf("%d",sum);
    return 0;
}
