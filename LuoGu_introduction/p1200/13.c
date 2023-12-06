#include <stdio.h>
int main()
{
    char a, b;
    int c = 1, d = 1;
    scanf("%c", &a);
    while (a != '\n')
    {
        c *= a - 'A' + 1;
        scanf("%c", &a);
    }
    scanf("%c", &b);
    while (b != '\n')
    {
        d *= b - 'A' + 1;
        scanf("%c", &b);
    }
    if (c % 47 == d % 47)
        printf("GO");
    else
        printf("STAY");
    return 0;
}