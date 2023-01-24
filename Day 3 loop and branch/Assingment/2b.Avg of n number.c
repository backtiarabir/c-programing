#include<stdio.h>
int main()
{
    int n,i,sum=0,avg =0,a;
    printf("Enter a positive number :");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        printf("Enter your value :");
        scanf("%d",&a);
        sum = sum +a;
    }
    avg = sum/n;
    printf("Your avarage of n positive number =");
    printf("%d",avg);
    return 0;
}
