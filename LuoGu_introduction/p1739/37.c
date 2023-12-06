#include <stdio.h>
#include <string.h>
// 注意：不能只判断（和）的数量相同，若）出现再（的左边也不行
int main()
{
    char expr[260];
    scanf("%s", expr);
    int len = strlen(expr), cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (expr[i] == '(')
            cnt1++;
        else if (expr[i] == ')')
            cnt2++;
        if (cnt1 < cnt2)
            break;
    }
    if (cnt1 == cnt2)
        printf("YES");
    else
        printf("NO");

    return 0;
}