#include <stdio.h>
//
int main(void) {
  int i;
  i = 0;
  while(i < 10) {
    printf("%d ", i);
    i++;
    if(i == 5) {
      break;
    }
  } 
}
