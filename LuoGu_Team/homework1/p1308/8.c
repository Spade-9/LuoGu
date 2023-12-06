#include <stdio.h>
#include <string.h>
int main()
{
    char word[15], art[1000005] = {0};
    int flag = 0, cnt = 0, address;
    fgets(word, 15, stdin);
    fgets(art, 1000005, stdin);
    int len1 = strlen(art), len2 = strlen(word);
    for (int i = 0; i < len1 - 1; i++)
    {
        if ('A' <= art[i] && art[i] <= 'Z')
            art[i] += 32;
    }
    for (int i = 0; i < len2 - 1; i++)
    {
        if ('A' <= word[i] && word[i] <= 'Z')
            word[i] += 32;
    }
    for (int i = 0; i < len1 - len2; i++)
    {
        int j;
        if (i != 0 && art[i - 1] != ' ')
            continue;
        for (j = 0; j < len2 - 1; j++)
        {
            if (art[i + j] == word[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag && (art[i + j] < 'a' || art[i + j] > 'z'))
        {
            cnt++;
            if (cnt == 1)
                address = i;
        }
    }
    if (cnt)
        printf("%d %d", cnt, address);
    else
        printf("-1");
    return 0;
}