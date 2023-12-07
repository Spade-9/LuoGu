// 改用递推，记忆搜索
// 首先发现f(2n)=f(2n+1)
// 接着发现，走完 1 --> 2 --> …… --> n/2 --> n --> 2n ,就能得到最后要求的数据
// 用一个数组前面计算出来的依次存起来
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int f[1005] = {0};
    f[1] = 1;
    for (int i = 2; i <= n; i += 2)
    {
        f[i] = 1;
        for (int j = 1; j <= i / 2; j++)
            f[i] += f[j];
        f[i + 1] = f[i];
    }
    printf("%d", f[n]);
    return 0;
}