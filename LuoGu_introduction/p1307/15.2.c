#include <stdio.h>
#include <string.h>
int main()
{
    char s[15];
    scanf("%s", s);
    int len = strlen(s);
    if (len == 1)
    {
        printf("%c", s[0]);
        return 0;
    }
    int flag = 0;
    if (s[0] == '-')
        printf("%c", s[0]);
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] != '0')
            flag = 1;
        if (flag == 1 && s[i] != '-')
            printf("%c", s[i]);
    }
    return 0;
}