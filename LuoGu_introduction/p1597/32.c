#include <stdio.h>
int main()
{
    char n, m;
    int abc[3] = {0};
    while (scanf("%c:=%c;", &n, &m) == 2)
    {
        if ('0' <= m && m <= '9')
            abc[n - 'a'] = m - '0';
        else
            abc[n - 'a'] = abc[m - 'a'];
    }
    printf("%d %d %d", abc[0], abc[1], abc[2]);

    return 0;
}