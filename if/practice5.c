/*****
     2つの整数値の大小関係を表示するプログラム
*****/
#include <stdio.h>

int main() {
  int a;
  int b;

  printf("整数A: ");
  scanf("%d", &a);

  printf("整数B: ");
  scanf("%d", &b);

  if (a == b) {
    printf("AとBは等しいです。\n");
  } else if (a > b) {
    printf("AはBより大きいです。\n");
  } else {
    printf("AはBより小さいです。\n");
  }

  return 0;
}
