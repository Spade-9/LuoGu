#include <stdio.h>
int main()
{
    int n, m, x, y, x1, x2, y1, y2, key_x, key_y;
    int map[110][110] = {0}, final[110][110] = {0}; //[y][x]
    scanf("%d %d %d %d", &n, &m, &x, &y);
    for (int i = 1; i <= x; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int j = x1; j <= x2 && j <= n; j++)
        {
            for (int k = y1; k <= y2 && k <= m; k++)
            {
                (map[k][j])++;
                final[k][j] = i;
            }
        }
    }
    for (int i = 0; i < y; i++)
    {
        scanf("%d %d", &key_x, &key_y);
        if (map[key_y][key_x])
        {
            printf("Y %d %d\n", map[key_y][key_x], final[key_y][key_x]);
        }
        else
            printf("N");
    }

    return 0;
}