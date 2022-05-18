/*****
     入力された値から1までカウントダウンするプログラム
*****/

#include <stdio.h>

int main() {
    int num;

    do {  // 後判定繰り返し
        printf("input number: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (num >= 1) {  // 前判定繰り返し
        printf("%d\n", num);
        num--;
    }

    return 0;
}

/*****
 インクリメントとデクリメントに関して、
 ++a：前置増分演算子、式全体を評価すると、増分後の値となる
 --a：前置減分演算子、式全体を評価すると、減分後の値となる
*****/