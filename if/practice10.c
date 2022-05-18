/*****
     入力された3つの整数値の等値関係を表示するプログラム
*****/

#include <stdio.h>

int main() {
  int n1, n2, n3;

  printf("整数1: ");
  scanf("%d", &n1);

  printf("整数2: ");
  scanf("%d", &n2);

  printf("整数3: ");
  scanf("%d", &n3);

  if (n1 == n2 && n2 == n3) {
    printf("3つの値は等しいです.\n");
  } else if (n1 == n2 || n2 == n3 || n3 == n1) {
    printf("2つの値は等しいです.\n");
  } else {
    printf("3つの値は異なります.\n");
  }

  return 0;
}
