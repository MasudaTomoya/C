/*****
     入力された2つの整数値が等しいか否かを判別するプログラム
     異なる場合、大きい方の値と小さい方の値をそれぞれ表示する
*****/

#include <stdio.h>

int main() {
  int n1, n2, min, max;

  printf("整数1: ");
  scanf("%d", &n1);

  printf("整数2: ");
  scanf("%d", &n2);

  if (n1 == n2) {
    printf("2つの値は等しい.\n");
    return 0;
  } else if (n1 > n2) {
    max = n1;
    min = n2;
  } else {
    max = n2;
    min = n1;
  }

  printf("大きい方の値は%d, 小さい方の値は%d\n", max, min);

  return 0;
}
