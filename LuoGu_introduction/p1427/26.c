#include <stdio.h>
int main()
{
    int num[105];
    int i;
    for (i = 0;; i++)
    {
        scanf("%d", num + i);
        if (num[i] == 0)
            break;
    }
    for (i -= 1; i >= 0; i--)
        printf("%d ", num[i]);
    return 0;
}