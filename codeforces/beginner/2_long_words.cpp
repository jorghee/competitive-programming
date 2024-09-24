#include <stdio.h>

void convertToChar(int num) {
  if (num / 10 == 0) printf("%c", (num % 10) + '0');
  else {
    convertToChar(num / 10);
    printf("%c", (num % 10) + '0');
  }
}

void buildAbrev() {
  int i = 10, len;
  char word[i], c = '\0', p = '\0';

  for (len = 0; (c = getchar()) != '\n'; len++) {
    p = c;
    if (len < i) word[len] = p;
  }

  if (len > i) {
    word[i - 1] = p;
    printf("%c", word[0]);
    convertToChar(len - 2);
    printf("%c\n", word[i - 1]);
  } else {
    for (i = 0; i < len; i++)
      printf("%c", word[i]);
    printf("\n");
  }
}

int main(void) {
  int n = 0, i = 0;
  char c = '\0';
  scanf("%d", &n);

  // chatarrero
  while ((c = getchar()) != '\n');

  while (i++ < n)
    buildAbrev();

  return 0;
} 
