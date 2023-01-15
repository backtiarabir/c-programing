#include<stdio.h>
int Fibonacci(int n){
int result =0;
if (n==0)
result +=0;
if(n==1)
result += 1;
if (n>1)
{
result += Fibonacci(n-1) + Fibonacci(n-2);

}
return result;
}

int main()
{
int n;
printf("Please Enter Value Of n");
scanf("%d",&n);
printf("Fibonacci number of n %d\n", Fibonacci(n));
return 0;
}
