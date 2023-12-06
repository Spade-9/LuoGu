#include <stdio.h>
int main()
{
    int M, N, tmp, cnt[10] = {0};
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++)
    {
        tmp = i;
        while (tmp != 0)
        {
            cnt[tmp % 10]++;
            tmp /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", cnt[i]);
    }

    return 0;
}