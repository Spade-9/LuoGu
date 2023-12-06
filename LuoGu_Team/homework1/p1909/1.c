#include <stdio.h>
int main()
{
    int n, money, num, price, min = 100000000;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &num, &price);
        if (n % num == 0)
            money = n / num * price;
        else
            money = (n / num + 1) * price;
        min = min > money ? money : min;
    }
    printf("%d", min);
    return 0;
}