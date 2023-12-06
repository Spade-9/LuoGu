#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        n -= i;
    if (i % 2 == 0)
        printf("%d/%d", n, i - n + 1);
    else
        printf("%d/%d", i - n + 1, n);
    return 0;
}