#include<stdio.h>
int main()
{
    int n,i,sum=0,a,c,b;
    printf("Enter a positive number :");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        printf("Enter your first value:\n");
        scanf("%d",&a);
        printf("Enter your second value:\n");
        scanf("%d",&b);
        if(b%2==0)
        {
        c = a*a*b;
        sum = sum + c;
        }

    }
    printf("sum = %d",sum);
    return 0;
}
