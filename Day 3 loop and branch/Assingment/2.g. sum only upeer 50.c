#include<stdio.h>
int main()
{
    int n,i,sum=0,a;
    printf("Enter a positive number :");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        printf("Enter your value:\n");
        scanf("%d",&a);
        if(a>50)
        {
        sum = sum +a;
        }

    }
    printf("sum = %d",sum);
    return 0;
}
