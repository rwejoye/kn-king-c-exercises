#include <stdio.h>

int main(void)
{
  int item_no, month, day, year;
  float price;
  printf("Enter Item Number: ");
  scanf("%d", &item_no);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yy): ");
  scanf("%d/%d/%d", &day, &month, &year);
  printf("Item\tUnit Price\tPurchase Date\n%d\t$%.2f\t%d/%d/%d\n", item_no, price, day, month, year);
  return 0;
}
