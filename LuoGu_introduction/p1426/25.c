#include <stdio.h>
#include <math.h>
int main()
{
    double s, x, total = 0; // 注意total必须从0开始，因为可能有x>=s的情况出现，即从一开始就已经在探测范围内了
    int i;
    scanf("%lf %lf", &s, &x);
    for (i = 0; total < s - x; i++)
    {
        total += 7 * pow(0.98, i);
    }
    total += 7 * pow(0.98, i);
    if (total > s + x) // 注意：此处不能用>=
        printf("n");
    else
        printf("y");

    return 0;
}