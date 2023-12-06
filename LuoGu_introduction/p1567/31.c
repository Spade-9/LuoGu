#include <stdio.h>
int main()
{
    int N, t[1000005], max = 1, day = 1, flag = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", t + i);
    for (int i = 0; i < N - 1; i++)
    {
        switch (flag)
        {
        case 1:
            if (t[i] < t[i + 1])
                day++;
            else
            {
                flag = 0;
                max = max < day ? day : max;
            }
            break;
        case 0:
            if (t[i] < t[i + 1])
            {
                day = 2;
                flag = 1;
            }
            break;
        }
    }
    max = max < day ? day : max;
    printf("%d", max);

    return 0;
}