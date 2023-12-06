#include <stdio.h>
#define week 250 * 5
int main()
{
    long long x, n, s = 0;
    scanf("%lld %lld", &x, &n);
    n = n - 8 + x;
    if (n >= 0)
    {
        if (x <= 5)
            s = (6 - x) * 250;
        s += n / 7 * week + (n % 7 % 6 + n % 7 / 6 * 5) * 250;
    }
    else
    {
        for (int i = x; i < 6; i++)
        {
            s += 250;
        }
    }
    printf("%lld", s);
    return 0;
}