#include <stdio.h>
int main() {
  int n;
  intptr_t arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter number%d: ", i);
    scanf("%d", &arr[i]);
  }


  for (int i = 1; i < n; ++i) {
    if (arr[0] > arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("smallest element = %d", arr[0]);

  return 0;
}
