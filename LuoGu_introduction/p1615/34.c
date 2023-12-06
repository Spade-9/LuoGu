#include <stdio.h>
int main()
{
    int h1, h2, min1, min2, s1, s2, n;
    scanf("%d:%d:%d", &h1, &min1, &s1);
    scanf("%d:%d:%d", &h2, &min2, &s2);
    scanf("%d", &n);
    long long time = (long long)(h2 - h1) * 3600 + (min2 - min1) * 60 + s2 - s1;
    printf("%lld", time * n);
    return 0;
}