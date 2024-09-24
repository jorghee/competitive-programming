#include <stdio.h>
 
int main(void) {
  int amount;
  scanf("%d", &amount);
 
  if (amount != 2 && amount % 2 == 0) printf("YES\n");
  else printf("NO\n");
 
  return 0;
}
