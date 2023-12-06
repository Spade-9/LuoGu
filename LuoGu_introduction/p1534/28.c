#include <stdio.h>
int main()
{
    int n, time1, time2, one_day = 0, total;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &time1, &time2);
        one_day = time1 + time2 - 8 + one_day;
        total += one_day;
    }
    printf("%d", total);
    return 0;
}