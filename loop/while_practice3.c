/*****
     入力された値から0までカウントダウンするプログラム
*****/

#include <stdio.h>

int main() {
    int num;

    do {  // 後判定繰り返し
        printf("input number: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (num >= 0) {  // 前判定繰り返し
        printf("%d\n", num);
        num--;
    }

    return 0;
}