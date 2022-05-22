/*****
     入力された3つの整数値の最小値を表示するプログラム
*****/

#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  int min;

  printf("整数A: ");
  scanf("%d", &a);

  printf("整数B: ");
  scanf("%d", &b);

  printf("整数C: ");
  scanf("%d", &c);

  min = a;

  if (min > b) {
    min = b;
  }
  if (min > c) {
    min = c;
  }

  printf("最小値は%d\n", min);

  return 0;
}
