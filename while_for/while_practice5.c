/*****
     整数値を読み込み、1から入力された値までカウントアップするプログラム
*****/

#include <stdio.h>

int main() {
    int num;
    int i = 1;

    do {  // 後判定繰り返し
        printf("input number: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (i <= num) {  // 前判定繰り返し
        printf("%d\n", i);
        i++;
    }

    return 0;
}