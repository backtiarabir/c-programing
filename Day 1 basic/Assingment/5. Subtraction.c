#include<stdio.h>
int main()
{
    int a,b;
    float sum;
    printf("Enter First Integer:\n");
    scanf("%d",&a);
    printf("Enter Second Integer:\n");
    scanf("%d",&b);

    //calculating sum

    sum = a - b;
    printf("Subtraction :");
    printf("%d-%d=%f",a,b,sum);
    return 0;
}
