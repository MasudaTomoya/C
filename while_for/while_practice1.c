/*****
     読み込んだ整数値の符号を判定するプログラム
*****/

#include <stdio.h>

int main() {
    int check;
    int num = 0;

    do {
        printf("input number: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("その数は０です\n");
        } else if (num > 0) {
            printf("その数は正です\n");
        } else {
            printf("その数は負です\n");
        }

        printf(
            "入力を続けますか？ "
            "続ける場合は0を入力してください: ");
        scanf("%d", &check);
    } while (check == 0);

    return 0;
}