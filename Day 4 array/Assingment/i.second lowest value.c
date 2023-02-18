#include <stdio.h>

int find_second_lowest(int arr[], int size) {
  int min = arr[0];
  int second_lowest = arr[1];
  if (arr[1] < arr[0]) {
    min = arr[1];
    second_lowest = arr[0];
  }

  for (int i = 2; i < size; i++) {
    if (arr[i] < min) {
      second_lowest = min;
      min = arr[i];
    } else if (arr[i] < second_lowest) {
      second_lowest = arr[i];
    }
  }

  return second_lowest;
}

int main() {
  int arr[10];
  printf("Enter 10 integer values: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  int second_lowest = find_second_lowest(arr, 10);

  printf("Second lowest value in the array: %d\n", second_lowest);

  return 0;
}
