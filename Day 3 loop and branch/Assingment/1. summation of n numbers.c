#include<stdio.h>
int main()
{
    int n,i,sum=0,a;
    printf("Enter a positive number :");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum = sum +a;

    }
    printf("sum = %d",sum);
    return 0;
}
