#include <stdio.h>

int main(void) {
  char i = 0;
  while(i <= 126) {
    int d = i;
    printf("%d : %c \n", d, i);
    i++;
  }
  return 0;
}
