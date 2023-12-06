// 第一遍，将路上的所有树打上标记，表示这个点没有被访问过。

// 第二遍，读入区间的头和尾，从这个区间的头开始循环，到尾结束，标记为访问过。

// 第三遍，顺序访问路上的树，只要没访问过，计数加1，这样就求出了路上所有还存在的树的数目。

#include <stdio.h>
int main()
{
    int l, m, rest;
    int tree[100005] = {0}; // 数组记得开大一点，防止越界访问
    int u, v;
    scanf("%d %d", &l, &m);
    rest = l + 1;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++)
        {
            tree[j] = 1;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        rest -= tree[i];
    }

    printf("%d", rest);

    return 0;
}