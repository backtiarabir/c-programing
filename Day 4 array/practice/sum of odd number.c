#include <stdio.h>
int main() {
  int n,sum =0;
  int arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter number%d: ", i);
    scanf("%d", &arr[i]);
  }


  for (int i = 0; i < n; ++i) {
    if (arr[i]%2==1)
        {
      sum = sum + arr[i];
    }
  }

  printf("sum of odd element = %d", sum);

  return 0;
