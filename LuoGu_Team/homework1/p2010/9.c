#include <stdio.h>
int Reverse(int year)
{
    int result = 0;
    while (year != 0)
    {
        result = result * 10 + year % 10;
        year /= 10;
    }
    return result;
}
int main()
{
    // 每一年最多能有一个回文数，因为年份（即前四位）是确定的
    int n, m, reverse, month, day, cnt = 0;
    int day_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &m);
    scanf("%d", &n);
    int year1 = m / 10000, year2 = n / 10000, month1 = m % 10000 / 100, month2 = n % 10000 / 100, day1 = m % 100, day2 = n % 100;
    for (int i = year1; i <= year2; i++)
    {
        reverse = Reverse(i);
        month = reverse / 100;
        day = reverse % 100;
        if (month < 1 || month > 12 || (i == year1 && month < month1) || (i == year2 && month > month2))
            continue;
        if ((i == year1 && month == month1 && day < day1) || (i == year2 && month == month2 && day > day2))
            continue;
        day_of_month[2] += ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0));
        if (day <= day_of_month[month] && day > 0)
            cnt++;
        day_of_month[2] = 28;
    }
    printf("%d", cnt);
    return 0;
}
