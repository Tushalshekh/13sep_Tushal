// WRITE A PROGRAM TO FIND EVEN OR ADD NUMBER USE IF ELSE STATEMENT
#include <stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d is the even number", x);
    }
    else
    {
        printf("%d is the odd number", x);
    }

    return 0;
}