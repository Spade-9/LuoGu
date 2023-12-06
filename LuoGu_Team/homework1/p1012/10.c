#include <stdio.h>
#include <string.h>
int compare(char *str1, char *str2);
int main()
{
    int n;
    scanf("%d", &n);
    char num[20][10] = {0};
    for (int i = 0; i < n; i++)
        scanf("%s", num[i]);
    int i[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (compare(num[i[k]], num[i[k + 1]])) // 如果num[a]在前，num[a+1]在后组成的数更小，交换
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
int compare(char *str1, char *str2)
{
    int i;
    char str3[10];
    for (int i = 0; i < 10; i++)
        str3[i] = str1[i];
    strcat(str1, str2);
    strcat(str2, str3);
    for (i = 0; str1[i] == str2[i]; i++)
        continue;
    if (str1[i] < str2[i])
        return 1;
    return 0;
}
// 注意：不能改动str1，str2的值，不然输出时会出问题！！得用它们的备份
//  int len1 = strlen(str1), len2 = strlen(str2);
//  for (int i = len1; i < len1 + len2; i++)
//      str1[i] = str2[i - len1];
//  for (int i = len2; i < len1 + len2; i++)
//      str2[i] = str1[i - len2];