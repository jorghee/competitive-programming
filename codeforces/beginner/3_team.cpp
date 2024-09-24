#include <stdio.h>

int main(void) {
  int n{}, i{}, pe{}, va{}, to{}, count{};
  char gb{};
  scanf("%d", &n);  

  while (i++ < n) {
    // while ((gb = getchar()) == '\n');
    scanf("%d %d %d", &pe, &va, &to);
    if (pe + va + to >= 2) count++;
  }

  printf("%d\n", count);

  return 0;
}
