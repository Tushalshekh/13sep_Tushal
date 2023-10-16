// #include <stdio.h>
// int main()
// {
//     int day, year;
//     printf("enter the days: ");
//     scanf("%d", &day);
//     year = day / 365;
//     printf("year: %d ", year);

//     return 0;
// }
#include <stdio.h>
int main()
{
    char sel;
    int a, b;
    printf("select the option: 1,2");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1:
        printf("enter the days: ");
        scanf("%d", &a);
        printf("years: %d", a / 365);
        break;

    case 2:
        printf("enter the year: ");
        scanf("%d", &b);
        printf("days: %d", b * 365);
        break;

    default:
        printf("not found");
        break;
    }

    return 0;
}