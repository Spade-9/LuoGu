#include <stdio.h>
#define from_mom 300

int main()
{
    int budget, save_month = 0, total_save = 0;
    for (int i = 1; i <= 12; i++)
    {
        save_month += from_mom;
        scanf("%d", &budget);
        save_month -= budget;
        if (save_month < 0)
        {
            printf("%d", -i);
            break;
        }
        total_save += save_month / 100;
        save_month %= 100;
    }
    if (save_month >= 0)
        printf("%d", total_save * 120 + save_month);
    return 0;
}