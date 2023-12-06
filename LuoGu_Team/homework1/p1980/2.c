#include <stdio.h>
int main()
{
    int n, x, tmp, cnt = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        tmp = i;
        while (tmp != 0)
        {
            if (tmp % 10 == x)
                cnt++;
            tmp /= 10;
        }
    }
    printf("%d", cnt);
    return 0;
}