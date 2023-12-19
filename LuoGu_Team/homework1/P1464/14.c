// 又是记忆化搜索呢

#include <stdio.h>

long long a = 0, b = 0, c = 0;
long long result_w[21][21][21] = {0};

long long w(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);

    if (a < b && b < c)
    {
        // w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c)
        if (!result_w[a][b][c - 1])
            result_w[a][b][c - 1] = w(a, b, c - 1);
        if (!result_w[a][b - 1][c - 1])
            result_w[a][b - 1][c - 1] = w(a, b - 1, c - 1);
        if (!result_w[a][b - 1][c])
            result_w[a][b - 1][c] = w(a, b - 1, c);
        result_w[a][b][c] = result_w[a][b][c - 1] + result_w[a][b - 1][c - 1] - result_w[a][b - 1][c];
    }

    else
    {
        // w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1)
        if (!result_w[a - 1][b][c])
            result_w[a - 1][b][c] = w(a - 1, b, c);
        if (!result_w[a - 1][b - 1][c])
            result_w[a - 1][b - 1][c] = w(a - 1, b - 1, c);
        if (!result_w[a - 1][b][c - 1])
            result_w[a - 1][b][c - 1] = w(a - 1, b, c - 1);
        if (!result_w[a - 1][b - 1][c - 1])
            result_w[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);
        result_w[a][b][c] = result_w[a - 1][b][c] + result_w[a - 1][b - 1][c] + result_w[a - 1][b][c - 1] - result_w[a - 1][b - 1][c - 1];
    }
    return result_w[a][b][c];
}
int main()
{
    scanf("%lld%lld%lld", &a, &b, &c);
    while (a != -1 || b != -1 || c != -1)
    {
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
        scanf("%lld%lld%lld", &a, &b, &c);
    }
}