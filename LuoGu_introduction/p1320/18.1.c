#include <stdio.h>
#include <math.h>
int main()
{
    char c, s[40005];
    int n = 0;
    while (scanf("%c", &c) == 1) // 这里会卡死吧，scanf永远会等待输入
    {
        if (c == '0' || c == '1')
            s[n++] = c;
    }
    printf("%d", (int)sqrt(n));

    char state = '0';
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        switch (state)
        {
        case '0':
            if (s[i] == '0')
                sum++;
            else
            {
                printf(" %d", sum);
                sum = 1, state = '1';
            }
            break;

        case '1':
            if (s[i] == '1')
                sum++;
            else
            {
                printf(" %d", sum);
                sum = 1;
                state = '0';
            }
        }
    }
}