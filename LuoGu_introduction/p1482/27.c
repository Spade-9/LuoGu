#include <stdio.h>
int main()
{
    int a1, b1, a2, b2;
    scanf("%d/%d", &a1, &b1);
    scanf("%d/%d", &a2, &b2);
    int a = a1 * a2, b = b1 * b2;
    int c = a, d = b;
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d %d", d / a, c / a);
    return 0;
}