#include <stdio.h>

int main(void)
{
  float i, j;
  scanf("%f,%f", &i, &j);
  printf("%.1f and %.1f", i, j);
  scanf("%f, %f", &i, &j);
  printf("%.1f and %.1f\n", i, j);
  return 0;
}
