/*****
     入力された4つの整数値の最大値を表示するプログラム
*****/

#include <stdio.h>

int main() {
  int num1, num2, num3, num4, max;

  printf("整数1: ");
  scanf("%d", &num1);

  printf("整数2: ");
  scanf("%d", &num2);

  printf("整数3: ");
  scanf("%d", &num3);

  printf("整数4: ");
  scanf("%d", &num4);

  max = num1;

  if (max < num2) {
    max = num2;
  }

  if (max < num3) {
    max = num3;
  }

  if (max < num4) {
    max = num4;
  }

  printf("最大は%d\n", max);

  return 0;
}
