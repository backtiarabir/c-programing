#include <stdio.h>

double find_average(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return (double) sum / size;
}

int main() {
  int arr[10];
  printf("Enter 10 integer values: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  double average = find_average(arr, 10);

  printf("Average value of the array: %.2f\n", average);

  return 0;
}
