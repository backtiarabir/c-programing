#include<stdio.h>
int main()

{
    int n,f,l,s;

    printf("Please enter a 3 digit number: ");
    scanf("%d", &n);

    f=n/100;
    l=n%10;
    s=f+l;

    printf("The sum is: %d", s);


    return 0;
}
