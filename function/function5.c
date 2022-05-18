/*
  4つの整数の最大値を求める
*/

#include <stdio.h>

int max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max4(int a, int b, int c, int d) { return max2(max2(a, b), max2(c, d)); }

int main() {
    int a, b, c, d;

    printf("input a: ");
    scanf("%d", &a);

    printf("input b: ");
    scanf("%d", &b);

    printf("input c: ");
    scanf("%d", &c);

    printf("input d: ");
    scanf("%d", &d);

    printf("最も大きい値は%dです.\n", max4(a, b, c, d));

    return 0;
}