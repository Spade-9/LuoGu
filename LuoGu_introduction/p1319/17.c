#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m, count = 0, row = 0;
    bool flag = false;

    scanf("%d", &n);
    while (row < n)
    {
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            printf("%d", flag);
            count++;
            if (count == n)
            {
                printf("\n");
                count = 0;
                row++;
            }
        }
        flag = !flag;

        // bool类型的取反，用！
        //! 表示逻辑取反，即把所有非0的数值（相当于1）变为0，0变为1;
        //~ 表示按位取反，即在数值的二进制表示方式上, 将0变为1，将1变为0；
    }

    return 0;
}