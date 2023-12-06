#include <stdio.h>
int main()
{
    int apple[10] = {};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &apple[i]);
    }
    int height, count = 0;
    scanf("%d", &height);
    height += 30;
    for (int i = 0; i < 10; i++)
    {
        if (height >= apple[i])
            count++;
    }
    printf("%d", count);

    return 0;
}