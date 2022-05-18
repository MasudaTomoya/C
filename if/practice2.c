/*****
     2つの整数値を入力させ、後者が前者の約数であるか否かを判別するプログラム
*****/

#include <stdio.h>

int main() {
  int a;
  int b;

  do {
    printf("整数A: ");
    scanf("%d", &a);
    printf("整数B: ");
    scanf("%d", &b);
  } while (a < 0 && b < 0);

  if (a % b == 0) {
    printf("BはAの約数です。\n");
  } else {
    printf("BはAの約数ではありません。\n");
  }

  return 0;
}
