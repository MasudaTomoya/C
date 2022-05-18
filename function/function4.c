/*
  2つの整数の2乗値の差を求める
*/

#include <stdio.h>

int sqr(int x) { return x * x; }

int diff(int x, int y) {
    if (x > y) {
        return x - y;
    } else {
        return y - x;
    }
}

int main() {
    int x, y, result;

    printf("input x: ");
    scanf("%d", &x);

    printf("input y: ");
    scanf("%d", &y);

    result = diff(sqr(x), sqr(y));

    printf("xの2乗とyの2乗の差は%dです.\n", result);

    return 0;
}