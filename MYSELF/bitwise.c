// & - Bitwise AND
// | - Bitwise OR
// ^ - Bitwise XOR

// 5 - 101
// 2 - 010
// 7 - 111
#include <stdio.h>
int main()
{
    int a, b;
    printf("ENTER THE NUM: ");
    scanf("%d", &a);
    printf("ENTER THE NUM: ");
    scanf("%d", &b);
    printf("\nAND: %d,%d", a, b);
    printf("\nAND : %d", a & b);
    printf("\nOR: %d,%d", a, b);
    printf("\n OR: %d", a | b);

    return 0;
}