/*****
    10の倍数か否かを判別するプログラム
    if文の使い方を理解することが目的
*****/

#include <stdio.h>

int main() {
  int num;

  do {
    printf("input number: ");
    scanf("%d",&num);
  } while (num < 0);

  if (num % 10 != 0) { // ()内の式を制御式という
    printf("その数は10の倍数ではありません。\n");
  }

  return 0;
}
