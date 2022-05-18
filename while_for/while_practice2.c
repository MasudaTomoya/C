/*****
     2つの整数値を入力し、小さい方の値以上で大きい方の値以下の全整数の和を表示するプログラム
*****/

#include <stdio.h>

int main() {
    int a, b, lower, upper;
    int sum = 0;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);

    if (a > b) {
        lower = b;
        upper = a;
    } else {
        lower = a;
        upper = b;
    }

    do {
        sum += lower;  // sum = sum + lower;と記述しても良い
        lower++;
    } while (lower <= upper);

    printf("合計値は%d.\n", sum);

    return 0;
}