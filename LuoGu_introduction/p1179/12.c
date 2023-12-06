#include <stdio.h>
int main()
{
    int L, R, tmp, count = 0;
    scanf("%d %d", &L, &R);
    for (int i = L; i <= R; i++)
    {
        int j = i;
        while (j != 0)
        {
            tmp = j % 10;
            j /= 10;
            if (tmp == 2)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}