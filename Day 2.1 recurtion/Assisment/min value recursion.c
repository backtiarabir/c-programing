#include <stdio.h>

int findMin(int n, int min) {
    if (n == 0) {
        return min;
    }
    int a;
    printf("Input an integer value: ");
    scanf("%d", &a);
    if (a < min) {
        min = a;
    }
    return findMin(n - 1, min);
}

int main() {
    int n, min;
    printf("Input the number of integers: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Input an integer value: ");
        scanf("%d", &min);
        int result = findMin(n - 1, min);
        printf("The minimum value is: %d\n", result);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
