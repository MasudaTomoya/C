/*****
     整数値の符号を判別するプログラム
     等価演算子(==, !=)と関係演算子を理解することが目的
*****/

#include <stdio.h>

int main() {
  int num;

  printf("input number: ");
  scanf("%d", &num);

  if (num == 0) { // numの値が0であるならば
    printf("入力された値は0です。\n");
  } else if (num > 0) {
    printf("入力された値は正です。\n");
  } else {
    printf("入力された値は負です。\n");
  }

  return 0;
}
