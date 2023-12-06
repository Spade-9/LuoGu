#include <stdio.h>
int main()
{
    int n, m, square = 0, rectangle;
    scanf("%d %d", &n, &m);
    int total_n = n * (n + 1) / 2, total_m = m * (m + 1) / 2;
    for (int i = 0; (i < n) && (i < m); i++)
    {
        square += (n - i) * (m - i); // 枚举实现正方形的数量计算
    }
    rectangle = total_m * total_n - square; // total_m * total_n算出总的取法
    printf("%d %d", square, rectangle);
    return 0;
}