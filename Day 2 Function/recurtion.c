#include <stdio.h>

int f(int x) {
  if (x == 0) {
    return 0;
  } else {
    return x + f(x - 1);
  }
}

int main() {
  int x;
  printf("Enter value of x: ");
  scanf("%d",&x);
  int result = f(x);
  printf("f(%d) = %d\n", x, result);
  return 0;
}
