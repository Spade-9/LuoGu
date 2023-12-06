#include <stdio.h>
int main()
{
    char s;
    int cnt = 0;
    while ((s = getchar()) != '\n')
    {
        if (s != ' ')
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}