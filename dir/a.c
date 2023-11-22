#include <stdio.h>

int main() {
  float s, t, x;
  int i,p;
  printf("请输入x的值");
  scanf("%f", &x);
  p = 1;
  i = 1;
  s = 0;
  t = x;

  while (t > 1e-6)
  {
    s = s + p*t;
    i = i + 2;
    p = -p;
    t = t * x * x/(i * (i - 1));
  }

  printf("%f", s);

  return 0;
}