#include <stdio.h>
int main()
{
    int m, n, a[3005], min = 0, sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    for (int i = 0; i < m; i++)
        sum += a[i];
    min = sum;
    for (int i = 0; i < n - m; i++)
    {
        sum = sum - a[i] + a[i + m]; // 减少一层循环
        if (min > sum)
            min = sum;
    }
    printf("%d", min);
    return 0;
}