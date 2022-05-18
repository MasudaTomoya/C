/*****
     入力された2つの整数値の差が10以上であるか否かを判別するプログラム
*****/

#include <stdio.h>

int main() {
  int n1, n2, remain;

  printf("整数1: ");
  scanf("%d", &n1);

  printf("整数2: ");
  scanf("%d", &n2);

  if (n1 > n2) {
    remain = n1 - n2;
  } else {
    remain = n2 - n1;
  }

  if (remain > 10) {
    printf("2つの整数値の差は11以上です.\n");
  } else {
    printf("2つの整数値の差は10以下です.\n");
  }

  return 0;
}
