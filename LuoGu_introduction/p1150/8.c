#include <stdio.h>
int main()
{
    long long n, total, k;
    scanf("%lld %lld", &n, &k);
    total = n;
    while (n >= k)
    {
        int i = n / k;
        total += i;
        n = n % k + i;
    }
    printf("%lld", total);
    return 0;
}