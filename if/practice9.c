/*****
     入力された2つの整数値の差を求めて表示するプログラム
     条件演算子(a ? b : c)を理解する
*****/

#include <stdio.h>

int main() {
  int num1, num2, remain;

  printf("整数1: ");
  scanf("%d", &num1);

  printf("整数2: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    remain = num1 - num2;
  } else {
    remain = num2 - num1;
  }

  printf("%d\n", remain);

  // ?の前の条件式が成立する(非0)場合、num1 - num2、成立しない場合、num2 - num1の値を代入する
  remain = (num1 > num2) ? num1 - num2 : num2 - num1;

  printf("%d\n", remain);

  return 0;
}
