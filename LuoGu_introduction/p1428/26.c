#include <stdio.h>
int main()
{
    int n, fish[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", fish + i);
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (fish[j] < fish[i])
                count++;
        }
        printf("%d ", count);
    }

    return 0;
}