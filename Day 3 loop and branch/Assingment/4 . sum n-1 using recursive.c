// 1+2+3+4...+n

#include <stdio.h>
int sum(int n)
{
 if(n==0)
 {
   return 0;
 }
 return sum(n-1)+n;
}

int main(void) {
 printf("%d", sum(4));
 return 0;
}
/*
// C program to find the sum of n
// natural numbers using recursion
#include <stdio.h>

// Returns the sum of first n
// natural numbers
int recSum(int n)
{
  // Base condition
    if (n <= 1)
        return n;

  // Recursive call
    return n + recSum(n - 1);
}

// Driver code
int main()
{
    int n = 10;
    printf("Sum = %d ", recSum(n));
    return 0;
} */
