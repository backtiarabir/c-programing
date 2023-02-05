#include<stdio.h>
int fib(int n)      //function declaration
{
    if(n==0||n==1)
    {
        return n;

    }

    else
    {
        return fib(n-1)+fib(n-2);
    }

}

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int result = fib(n);   // function call
    printf("fib(%d) = %d\n", n, result);
    return 0;
}

