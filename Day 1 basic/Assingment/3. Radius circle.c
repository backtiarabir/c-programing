#include<stdio.h>
int main()
{
    int A,r;
    printf("Enter A Raduis :");
    scanf("%d", &r);

     //calcalution
     A = 3.1416*r*r;
     printf("The Area Of A Circle :");
     printf("3.1416*%d*%d=%d",r,r,A);
     return 0;
}
