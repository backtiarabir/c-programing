#include <stdio.h>

void modify_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      arr[i] += 4;
    } else {
      arr[i] -= 4;
    }
  }
}

int main() {
  int arr[10];
  printf("Enter 10 integer values: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  modify_array(arr, 10);

  printf("New values of the array: \n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
