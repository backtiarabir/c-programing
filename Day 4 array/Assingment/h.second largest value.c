#include <stdio.h>

int find_second_largest(int arr[], int size) {
  int max = arr[0];
  int second_largest = arr[1];
  if (arr[1] > arr[0]) {
    max = arr[1];
    second_largest = arr[0];
  }

  for (int i = 2; i < size; i++) {
    if (arr[i] > max) {
      second_largest = max;
      max = arr[i];
    } else if (arr[i] > second_largest) {
      second_largest = arr[i];
    }
  }

  return second_largest;
}

int main() {
  int arr[10];
  printf("Enter 10 integer values: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  int second_largest = find_second_largest(arr, 10);

  printf("Second largest value in the array: %d\n", second_largest);

  return 0;
}
