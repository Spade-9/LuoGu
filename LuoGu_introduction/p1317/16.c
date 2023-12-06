#include <stdio.h>
int main()
{
    int n, last, now, flag, count = 0; // flag=1,标记可能进入盆地
    scanf("%d", &n);
    scanf("%d", &now);
    for (int i = 0; i < n - 1; i++)
    {
        last = now;
        scanf("%d", &now);
        if (flag == 1 && now > last)
        {
            count++;
            flag = 0;
        }
        if (now < last) // 可能进入盆地了
            flag = 1;
    }
    printf("%d", count);
    return 0;
}