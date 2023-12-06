#include <stdio.h>
int main()
{
    char board[9] = {0}, tmp;
    int flag = 0, cnt;
    tmp = getchar();
    for (cnt = 0; tmp <= '9' && tmp >= '1'; cnt++)
    {
        if (cnt % 2 == 0)
            board[tmp - '1'] = 'a';
        else
            board[tmp - '1'] = 'u';
        tmp = getchar();
    }
    for (int i = 0; i <= 6; i += 3)
    {
        if (board[i] == board[i + 1] && board[i] == board[i + 2])
        {
            flag = 1;
            goto a;
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        if (board[i] == board[i + 3] && board[i] == board[i + 6])
        {
            flag = 1;
            goto a;
        }
    }
    if ((board[2] == board[4] && board[2] == board[6]) || (board[0] == board[4] && board[4] == board[8]))
        flag = 1;

a:
    if (flag)
    {
        if (cnt % 2 == 0)
            printf("uim wins.");
        else
            printf("xiaoa wins.");
    }
    else
        printf("drew.");

    return 0;
}