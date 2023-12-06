#include <stdio.h>
#include <string.h>
int main()
{
    char str[260];
    scanf("%s", str);
    int len = strlen(str);
    // 这个思路是真的6，发挥计算机强大的循环能力，直接挨着判断boy，girl的可能位置
    int boy = 0, girl = 0;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y')
            boy++;
    }
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l')
            girl++;
    }
    printf("%d\n%d\n", boy, girl);
    return 0;
}