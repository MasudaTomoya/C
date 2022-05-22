/*****
     入力された整数の絶対値を表示するプログラム
*****/

#include <stdio.h>

int main() {
  int num;

  printf("input number: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num;
  }

  printf("%d\n", num);

  return 0;
}
