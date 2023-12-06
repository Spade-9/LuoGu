#include <stdio.h>
int main()
{
    int a, b, c, d, h, min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    h = c - a;
    min = d - b;
    if (min < 0)
    {
        h -= 1;
        min += 60;
    }
    printf("%d %d", h, min);
    return 0;
}