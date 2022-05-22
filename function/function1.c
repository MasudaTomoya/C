/*****
     入力された2つの整数値の小さい方の値を返す関数
*****/

#include <stdio.h>

int minimum(int a, int b) {  // 返り値の型と関数名、仮引数を宣言する
    if (a > b) {             // aよりもbの方が小さかった場合
        return b;
    } else {  // bよりもaの方が小さかった場合
        return a;
    }
}

int main() {
    int a, b;
    int min;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);

    min = minimum(a, b);

    printf("小さい方の値は%dです.\n", min);

    return 0;
}