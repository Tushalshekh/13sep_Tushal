#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d is the negative number",num);
    }
    else if (num > 0)
    {
        printf("%d is the positive number",num);
    }
    else
    {
        printf("%d is the not found",num);
    }

    return 0;
}