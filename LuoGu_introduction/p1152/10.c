#include <stdio.h>
int main()
{
    int arr[1001] = {0};
    int n, last, now, sub, sum = 0;
    scanf("%d %d", &n, &last);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &now);
        if (last <= now)
            sub = now - last;
        else
            sub = last - now;
        last = now;
        if (sub >= n) // 此时没必要给数组赋值，因为用不上，可以节省时间
            continue;
        arr[sub] = 1;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        sum += arr[i];
    }
    if (sum == n - 1)
        printf("Jolly");
    else
        printf("Not jolly");
    return 0;
}

// 算法改进
//  我们观察，发现要满足欢乐的跳，每种情况只能且必须出现一次，所以只要出现重复或者超出界限，就输出"Not jolly"。
//  #include <bits/stdc++.h>
//  using namespace std;
//  int n, x, k, h;
//  bool a[1005];
//  int main()
//  {
//      cin >> n;
//      cin >> x;
//      for (int i = 2; i <= n; i++)
//      {
//          cin >> k;            // 使用骚操作不开数组输入
//          h = abs(x - k);      // 由于需要多次用到，先把他的值赋给h
//          if (h >= 1 && h < n) // 如果没有超出界限
//          {
//              if (a[h]) // 如果已经有过这种结果
//              {
//                  cout << "Not jolly";
//                  return 0; // return之后整个程序就不会运行了
//              }
//              else
//                  a[h] = true; // 否则存储下来
//          }
//          else // 超出界限
//          {
//              cout << "Not jolly";
//              return 0;
//          }
//          x = k; // 把当前值赋给x存储，因为还要使用这个数
//      }
//      cout << "Jolly" << '\n'; // 如果没有停止运行，就满足条件，输出
//      return 0;
//  }