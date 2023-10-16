// *************************************Simple Interest********************************
#include <stdio.h>
int main()
{
    float principal, interest, rate, time;
    printf("Enter the principal of interest: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time(in year ) of interest: ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("%f Interest is : %f", principal, interest);

    return 0;
}