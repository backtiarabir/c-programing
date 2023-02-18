#include <stdio.h>;
#include <ctype.h>;

int main()
{
      int lower, upper;

      lower = getchar();
      upper = toupper(lower);
      putchar(upper);

      return 0;
}
