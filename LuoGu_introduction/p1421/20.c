#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = a * 10 + b;
    printf("%d", total / 19);
    return 0;
}