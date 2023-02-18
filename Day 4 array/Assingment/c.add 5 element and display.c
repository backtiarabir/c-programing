#include <stdio.h>

int main() {
    int size = 10;
    int arr[10];
    int i;

    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        arr[i] =arr[i] + 5;
    }

    printf("The new values of the array after adding 5 are:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
