#include <stdio.h>
#include <string.h>
int main()
{
    char num[15] = {0};
    scanf("%s", num);
    if (strlen(num) == 1)
        printf("%s", num);
    else
    {
        if (num[0] == '-')
            printf("-");
        for (int i = 0;; i++)
        {
            while (num[i] == '\000')
            {
                for (int j = i - 1; j > 0; j--)
                {
                    if (num[j] != '0')
                    {
                        while (j > 0)
                        {
                            printf("%c", num[j]);
                            j--;
                        }
                        if (num[0] != '-')
                            goto a;
                        else
                            goto b;
                    }
                }
            }
        }
    a:
        printf("%c", num[0]);
    b:;
    }

    return 0;
}

// 直接对数字进行运算
//
//  #include <stdio.h>
//  int main()
//  {
//      int n, s = 0;
//      scanf("%d", &n);
//      while (n != 0)
//      {
//          s = s * 10 + n % 10;//s*10是关键！！如果n不是0，就一直s让一位，腾个0出来，n最后一位跟上去，再无情地抛弃了最后一位
//          n /= 10;
//      }
//      printf("%d", s);
//      return 0;
//  }