// 分析：
// f(n)=f(n-1)+f(n-1)+……+f(end)
// 其中，end = min { n-k , 0 }

#include <stdio.h>
#define mod 100003
int dp[100005] = {0};
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k && j <= i; j++)
            dp[i] = (dp[i] + dp[i - j]) % mod;
    }
    printf("%d", dp[n]);
}