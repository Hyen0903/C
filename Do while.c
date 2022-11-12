#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 1;
  int c = 0;
  do {
    printf("100보다 큰 값을 입력하세요.");
    scanf("%d", &a);
  } while(a < 100);
  while(b <= a) {
    if(b % 3 == 0 || b % 7) {
      printf("%d\n", b);
    }
    b++;
  }
  return 0;
}
//Do while문 활용
