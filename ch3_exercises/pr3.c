#include <stdio.h>

int main(void)
{
  int gsi, gi, pub_code, item_no, check;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gsi, &gi, &pub_code, &item_no, &check);
  printf("GSI Prefix: %d\n", gsi);
  printf("Group Identifer: %d\n", gi);
  printf("Publisher Code: %d\n", pub_code);
  printf("Item number: %d\n", item_no);
  printf("Check digit: %d\n", check);
  return 0;
}
