#include <stdio.h>
#include <string.h>
int compare(char *str1, char *str2);
int main()
{
    int n;
    scanf("%d", &n);
    char num[20][10] = {'\0'};
    for (int i = 0; i < n; i++)
        scanf("%s", num[i]);
    int i[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (compare(num[i[k]], num[i[k + 1]]) > 0) // 如果num[a]在前，num[a+1]在后组成的数更小，交换
            {
                int tmp = i[k + 1];
                i[k + 1] = i[k];
                i[k] = tmp;
            }
        }
    }
    for (int j = 0; j < n; j++)
        printf("%s", num[i[j]]);
    return 0;
}

int compare(char str1[], char str2[])
{
    char str3[20] = "\0", str4[20] = "\0";
    for (int i = 0; i < 10; i++)
        str3[i] = str1[i];
    for (int i = 0; i < 10; i++)
        str4[i] = str2[i];
    strcat(str3, str2);
    strcat(str4, str1);
    // for (int i = 0; i < 20; i++)
    // {
    //     if (str3[i] < str4[i])
    //         return 1;
    //     else if (str3[i] > str4[i])
    //         return 0;
    // }
    // return 0;
    int falg = strcmp(str4, str3);
    return falg;
}