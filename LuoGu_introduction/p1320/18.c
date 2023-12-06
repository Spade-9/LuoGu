#include <stdio.h>
#include <string.h>
int main()
{
    char matrix[40005], count0 = 0, count1 = 0;
    scanf("%s", matrix);
    int n = strlen(matrix);
    for (int i = 1; i <= n - 1; i++)
    {
        scanf("%s", matrix + n * i);
    }
    printf("%d", n);
    if (matrix[0] != '0')
        printf(" 0");
    for (int i = 0; i <= n * n; i++)
    {
        int j = matrix[i];
        if (j == '0')
        {
            if (count1 != 0)
                printf(" %d", count1);
            count1 = 0;
            count0++;
        }
        else if (j == '1')
        {
            if (count0 != 0)
                printf(" %d", count0);
            count0 = 0;
            count1++;
        }
        else if (j == '\000')
        {
            if (count0 != 0)
                printf(" %d", count0);
            else if (count1 != 0)
                printf(" %d", count1);
        }
    }
    return 0;
}