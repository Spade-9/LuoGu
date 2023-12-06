#include <stdio.h>
int main()
{
    int n, m, sum, day; // sum:每天学习时长
    scanf("%d %d", &n, &m);
    sum = n + m;
    for (int i = 2; i <= 7; i++)
    {
        scanf("%d %d", &n, &m);
        if (n + m > sum)
        {
            sum = n + m;
            day = i;
        }
    }
    if (sum > 8)
        printf("%d", day);
    else
        printf("0");
    return 0;
}