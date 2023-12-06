#include <stdio.h>
int main()
{
    char s[15];
    int flag = 0, j = 1;
    scanf("%s", s);
    for (int i = 0; i < 11; i++)
    {
        if (s[i] == '-')
            continue;
        flag += (s[i] - '0') * j++;
    }
    flag %= 11;
    if ((flag != 10 && flag == s[12] - '0') || (flag == 10 && s[12] == 'X'))
        printf("Right");
    else
    {
        for (int i = 0; i < 12; i++)
            printf("%c", s[i]);
        if (flag == 10)
            printf("X");
        else
            printf("%d", flag);
    }
    return 0;
}