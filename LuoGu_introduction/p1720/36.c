#include <stdio.h>
#include <math.h>

int main()
{
    // 通过数学推导，知Fn是斐波那契数列,但是我们这里不用递推公式求
    int n;
    scanf("%d", &n);
    double a, Fn, x1, x2;
    a = sqrt(5.0);
    x1 = (1 + a) / 2;
    x2 = (1 - a) / 2;
    Fn = (pow(x1, n) - pow(x2, n)) / a;
    printf("%.2lf", Fn);
    return 0;
}