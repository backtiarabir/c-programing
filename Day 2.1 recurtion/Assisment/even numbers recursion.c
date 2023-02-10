#include <stdio.h>

int findSum(int n, int sum) {
    if (n == 0) {
        return sum;
    }
    int a;
    printf("Input an integer value: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        sum = sum + a;
    }
    return findSum(n - 1, sum);
}

int main() {
    int n, sum = 0;
    printf("Input the number of integers: ");
    scanf("%d", &n);
    if (n > 0) {
        int result = findSum(n, sum);
        printf("The sum of even numbers is: %d\n", result);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
