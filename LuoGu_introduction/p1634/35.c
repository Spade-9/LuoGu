#include <stdio.h>
#include <math.h>
int main()
{
    long long x, n, sum = 1;
    scanf("%lld %lld", &x, &n);
    for (long long i = 0; i < n; i++)
    {
        sum += sum * x;
    }
    printf("%lld", sum);
    return 0;
}