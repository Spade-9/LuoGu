#include <stdio.h>
int main()
{
    int k;
    double Sn, n;
    scanf("%d", &k);
    for (Sn = 0, n = 1; Sn <= k; n++)
    {
        Sn += 1 / n;
    }
    printf("%.0lf", n - 1);
    return 0;
}