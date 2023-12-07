#include <stdio.h>
int main()
{
    char origin[10005] = {0}, ueser[10005] = {0};
    int i, j;
    for (i = 0;; i++)
    {
        scanf("%c", origin + i);
        if (origin[i] == 'F' && i > 1 && origin[i - 1] == 'O' && origin[i - 2] == 'E')
            break;
    }
    getchar();
    for (j = 0;; j++)
    {
        scanf("%c", ueser + j);
        if (ueser[j] == 'F' && j > 1 && ueser[j - 1] == 'O' && ueser[j - 2] == 'E')
            break;
    }
    int cnt = 0;
    for (int m = 0, n = 0; m <= i - 3 && n <= j - 3; m++, n++)
    {
        if (ueser[n] == '<')
        {
            n++;
            m--;
        }
        if (origin[m] == ueser[n])
        {
            cnt++;
            if (origin[m] == '\n')
                cnt--;
        }
        else if (origin[m] == '\n')
        {
            if (ueser[n] == '<' && m > 0 && ueser[n + 1] == origin[m - 1] && ueser[n + 1] != '\n')
                cnt++;
            while (ueser[n] != '\n')
                n++;
        }
        else if (ueser[n] == '\n')
        {
            while (origin[m] != '\n')
                m++;
        }
    }
    int T;
    scanf("%d", &T);
    printf("%.0f", (float)cnt * 60 / T);
    return 0;
}