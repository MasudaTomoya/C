/*****
     正の整数値を読み込み、読み込まれた整数値以下の偶数を表示するプログラム
*****/

#include <stdio.h>

int main() {
    int num;
    int i = 2;

    do {
        printf("input number: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (i <= num) {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");

    return 0;
}