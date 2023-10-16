#include <stdio.h>
int main()
{
    int num, day, week, month, year;
    printf("enter the number: ");
    scanf("%d", &num);
    day = num;
    week = day / 7;
    month = day / 30;
    year = day / 365;
    printf("\nday : %d", day);
    printf("\nweek : %d", week);
    printf("\nmonth : %d", month);
    printf("\nyear : %d", year);

    return 0;
}