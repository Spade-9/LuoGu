// 递归算法，会超时，md
#include <stdio.h>
int Count(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1 + Count(n);
    printf("%d", cnt);
    return 0;
}

int Count(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        sum += 1 + Count(i);
    }
    return sum;
}