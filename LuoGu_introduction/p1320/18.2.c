#include <stdio.h>
// #include <math.h>
#include <string.h>
int main()
{
    // char c, s[40005];
    // int n = 0;
    // while (scanf("%c", &c) == 1) // 这里会卡死吧，scanf永远会等待输入
    // {
    //     if (c == '0' || c == '1')
    //         s[n++] = c;
    // }
    // printf("%d", (int)sqrt(n));

    char s[40005];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 1; i <= n - 1; i++)
    {
        scanf("%s", s + n * i);
    }
    printf("%d", n);

    char state = '0';
    int sum = 0;
    for (int i = 0; i <= n * n; i++)
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