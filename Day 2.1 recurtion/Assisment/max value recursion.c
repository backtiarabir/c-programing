#include <stdio.h>

int findMax(int n, int max) {
    if (n == 0) {
        return max;
    }
    int a;
    printf("Input an integer value: ");
    scanf("%d", &a);
    if (a > max) {
        max = a;
    }
    return findMax(n - 1, max);
}

int main() {
    int n, max;
    printf("Input the number of integers: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Input an integer value: ");
        scanf("%d", &max);
        int result = findMax(n - 1, max);
        printf("The maximum value is: %d\n", result);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
