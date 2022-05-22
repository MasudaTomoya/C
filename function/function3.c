/*
  3つの整数の最大値を求める
*/

#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;

    if (max < b) max = b;
    if (max < c) max = c;

    return max;
}

int main() {
    int a, b, c;
    int max;

    printf("input a: ");
    scanf("%d", &a);

    printf("input b: ");
    scanf("%d", &b);

    printf("input c: ");
    scanf("%d", &c);

    max = max3(a, b, c);

    printf("最大値は%dです.\n", max);

    return 0;
}