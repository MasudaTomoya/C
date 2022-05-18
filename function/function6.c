/*
 ベキ乗を求める
*/

#include <stdio.h>

double power(double x, int n) {
    int i;
    double tmp = 1.0;

    for (i = 0; i < n; i++) {
        tmp *= x;
    }

    return tmp;
}

int main() {
    double a;
    int b;

    printf("input a: ");
    scanf("%lf", &a);

    printf("input b: ");
    scanf("%d", &b);

    printf("%.2fの%d乗は%.2fです.\n", a, b, power(a, b));

    return 0;
}
