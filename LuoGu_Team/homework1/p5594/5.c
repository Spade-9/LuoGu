#include <stdio.h>
int a[1005][1005] = {0};
int main()
{
    int n, m, k, b[1005] = {0};
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    }
    for (int j = 1; j <= m; j++)
    {
        int flag[1005] = {0};
        for (int i = 1; i <= n; i++)
        {
            if (flag[(a[i][j])] != 1)
            {
                b[(a[i][j])]++;
                flag[(a[i][j])] = 1;
            }
        }
    }
    for (int i = 1; i <= k; i++)
        printf("%d ", b[i]);

    return 0;
}