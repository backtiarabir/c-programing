#include <stdio.h>

int f(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n * n + f(n - 1);
  }
}

int main() {
  int n;
  printf("Enter value of n: ");
  scanf("%d",&n);
  int result = f(n);
  printf("f(%d) = %d\n", n, result);
  return 0;
}
