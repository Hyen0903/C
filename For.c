#include <stdio.h>

int main(void) {
  double a = 0.0;
  double b = 80.0;
  a += b;
  printf("%f.4로 시작 \n", b);
  for(; b >= 0.5; ) {
    a += b;
    b /= 2.0;
    
    printf("뛰어오른 높이 %.4f\n", b);
  }
  printf("%.4fm", a);
  return 0;
}
