/*****
     等価演算子と関係演算子が生成する値を表示するプログラム
*****/

#include <stdio.h>

int main() {
  int a,b;

  printf("変数a: ");
  scanf("%d", &a);
  printf("変数b: ");
  scanf("%d", &b);

  printf("a == bの値: %d\n", a == b);
  printf("a != bの値: %d\n", a != b);

  printf("a < bの値: %d\n", a < b);
  printf("a <=  bの値: %d\n", a <= b);
  printf("a > bの値: %d\n", a > b);
  printf("a >= bの値: %d\n", a >= b);

  return 0;
}
