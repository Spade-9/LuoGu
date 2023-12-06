#include <stdio.h>
int main()
{
    double s, a = 2, sum = 2;
    int count = 1;
    scanf("%lf", &s);
    while (sum < s)
    {
        a *= 0.98;
        sum += a;
        count++;
    }
    printf("%d", count);
    return 0;
}