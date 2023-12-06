#include <stdio.h>
int main()
{
    int huoba[5][5] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}};
    int n, m, k, a[105][105] = {0};
    scanf("%d %d %d", &n, &m, &k);
    int x, y;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        x += 1;
        y += 1;
        for (int c = x - 2, j = 0; c <= x + 2; c++, j++)
        {
            for (int r = y - 2, l = 0; r <= y + 2; r++, l++)
                a[r][c] |= huoba[l][j];
        }
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &x, &y);
        x += 1;
        y += 1;
        for (int c = x - 2, j = 0; c <= x + 2; c++, j++)
        {
            for (int r = y - 2, l = 0; r <= y + 2; r++, l++)
                a[r][c] |= 1;
        }
    }
    int sum = 0;
    for (int i = 2; i < n + 2; i++)
    {
        for (int j = 2; j < n + 2; j++)
            sum += a[i][j];
    }
    printf("%d", n * n - sum);
    return 0;
}