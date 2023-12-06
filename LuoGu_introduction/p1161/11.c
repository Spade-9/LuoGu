#include <stdio.h>
int main()
{
    int n, t, result = 0;
    double a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %d", &a, &t);
        for (int j = 1; j <= t; j++)
            result ^= (int)(a * j);
    }
    printf("%d", result);
    return 0;
}