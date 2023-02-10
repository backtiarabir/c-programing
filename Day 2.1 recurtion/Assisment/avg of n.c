#include <stdio.h>

int sum = 0;
int avg = 0;

void inputNumber(int n) {
    if (n == 0) {
        return;
    }
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    sum = sum + a;
    avg = sum / n;
    inputNumber(n-1);
}

int main() {
    int n;
    printf("Enter the number of integers you want to input: ");
    scanf("%d", &n);
    inputNumber(n);
    printf("Avg: %d\n", avg);
    return 0;
}
