/*****
     入力された整数が奇数か偶数かを判別するプログラム
     switch-case文を理解する
*****/

#include <stdio.h>

int main() {
  int num;

  printf("input number: ");
  scanf("%d", &num);

  switch (num % 2) { // switch-case文の場合、制御式の型は整数値である必要がある
    case 0:
    printf("入力された値は偶数です.\n"); // 制御式(num % 2)の値が0のとき
    break;

    case 1:
    printf("入力された値は奇数です.\n"); // 制御式(num % 2)の値が1のとき
    break;
  }

  return 0;
}
