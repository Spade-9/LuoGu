#include <stdio.h>
int arr[100];         // 给定的整数数组
int visit[100] = {0}; // visit[]表示某一个下标有没有被访问过
int n, k;
int cnt = 0; // cnt用于计数
int isPrime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void dfs(int step, int sum, int start)
{
    // step表示搜索深度, sum记录当前搜索深度的总和, start表示i的起始位置
    if (step == k)
    {
        if (isPrime(sum))
            cnt++;
        return;
    }
    for (int i = start; i < n; i++)
    {
        if (!visit[i]) // 如果下标i没有访问过
        {
            visit[i] = 1;                       // 把下标i标记成访问过
            dfs(step + 1, sum + arr[i], i + 1); // 把arr[i]加到sum里，把start赋值为i+1，递归
            visit[i] = 0;                       // 恢复下标i为未访问的状态
        }
    }
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    dfs(0, 0, 0);
    printf("%d", cnt);
}