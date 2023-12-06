#include <stdio.h>
#define price1 0.4463
#define price2 0.4663
#define price3 0.5663
int main()
{
    int a;
    double sum;
    scanf("%d", &a);
    if (a <= 150)
        sum = a * price1;
    else if (151 <= a && a <= 400)
        sum = 150 * price1 + (a - 150) * price2;
    else
        sum = 150 * price1 + 250 * price2 + (a - 400) * price3;
    printf("%.1lf", sum);
    return 0;
}