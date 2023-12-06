#include <stdio.h>
int main()
{
    // 用数组标记：是质数就标记为0，不是则标记为1；最后从最小质数开始取，通过该数组，判断与之对应的另一个数是不是质数
    int N, not_prime[10005] = {0};
    scanf("%d", &N);
    for (int i = 4; i <= N; i++)
    {
        for (int j = 2; j * j <= i; j++) // 用数组进行标记
        {
            if (i % j == 0)
                not_prime[i] = 1;
        }
    }

    for (int i = 4; i <= N; i += 2)
    {

        for (int j = 2; j <= i / 2; j++) // 找所求质数
        {
            if (not_prime[j] == 0 && not_prime[i - j] == 0)
            {
                printf("%d=%d+%d\n", i, j, i - j);
                break;
            }
        }
    }

    return 0;
}