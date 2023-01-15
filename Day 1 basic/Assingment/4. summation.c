#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter First Integer:\n");
    scanf("%d",&a);
    printf("Enter Second Integer:\n");
    scanf("%d",&b);

    //calculating sum

    sum = a + b;
    printf("Summaton :");
    printf("%d+%d=%d",a,b,sum);
    return 0;
}
