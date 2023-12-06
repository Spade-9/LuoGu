#include <stdio.h>

int main()
{
    int k, flag = 0;
    scanf("%d", &k);
    for (int i = 10000; i <= 30000; i++)
    {
        if (i % 1000 % k != 0)
            continue;
        if (i % 10000 / 10 % k != 0)
            continue;
        if (i / 100 % k != 0)
            continue;
        printf("%d\n", i);
        flag = 1;
    }
    if (flag == 0)
        printf("No");

    return 0;
}
