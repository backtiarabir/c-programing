#include <stdio.h>

int findSum(int n, int sum) {
    if (n == 0) {
        return sum;
    }
    int a;
    printf("Input an integer value: ");
    scanf("%d", &a);
    if (a < 50) {
        sum += a;
    }
    return findSum(n - 1, sum);
}

int main() {
    int n, sum = 0;
    printf("Input the number of integers: ");
    scanf("%d", &n);
    if (n > 0) {
        int result = findSum(n, sum);
        printf("The sum of integers greater than 50 is: %d\n", result);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
