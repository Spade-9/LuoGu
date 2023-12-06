#include <stdio.h>
int main()
{
    char str[205];
    int count = 0;
    fgets(str, 205, stdin);
    for (int i = 0; ('a' <= str[i] && str[i] <= 'z') || str[i] == ' '; i++)
    // 注：此处有些输入是以\r或EOF结尾的，不止是\n
    {
        if ('a' <= str[i] && str[i] <= 'r')
            count += (str[i] - 'a') % 3 + 1;
        else if (str[i] == 's' || str[i] == 'z')
            count += 4;
        else if ('t' <= str[i] && str[i] <= 'y')
            count += (str[i] - 't') % 3 + 1;
        else
            count++;
    }
    printf("%d", count);
    return 0;
}