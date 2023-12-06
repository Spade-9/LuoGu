#include <stdio.h>
int main()
{
    int n, num[105], cnt = 0, sum;
    int flag[105] = {0}; // 标记数组：因为1+4=2+3=5，这种会重复，得标记，避免重复
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = num[i] + num[j];
            for (int k = 0; k < n; k++)
            {
                if (sum == num[k] && flag[k] != 1)
                {
                    cnt++;
                    flag[k] = 1;
                    break;
                }
            }
        }
    }
    printf("%d", cnt);

    return 0;
}