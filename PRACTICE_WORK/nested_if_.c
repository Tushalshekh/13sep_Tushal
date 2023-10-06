#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d is the negative number", num);
    }
    else
    {
        if (num == 0)
        {
            printf("%d is the zirooooo", num);
        }
        else
            printf("%d is the positive number", num);
    }

    return 0;
}