/*
  二つの整数の大きい方の値を求める
*/

#include <stdio.h>

int max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a;
    int b;
    int max;

    printf("input a: ");
    scanf("%d", &a);

    printf("input b: ");
    scanf("%d", &b);

    max = max2(a, b);

    printf("大きい方の値は%dです.\n", max);

    return 0;
}