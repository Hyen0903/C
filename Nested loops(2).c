#include <stdio.h>

int main(void) {
  int a = 0;
  for(scanf("%d", &a); a >= 0; a--) {
    for(int c = a; c >= 1; c--) {
      printf("%d ", c);
    }
    printf("\n");
  }
  return 0;
}
