#include <stdio.h>
int main()
{
    int a = 24;                     // = use
    printf("a += : %d\n", a += 2); //+= use
    printf("b is : %d\n", a);//a=26
    printf("a -= : %d\n", a -= 2);//-= use in a=26
    printf("a *= : %d\n",a*=2);//*= use 24*2=48
    printf("a /= : %d\n",a/=2);//= use 48/2=24
    printf("a %= : %d\n",a%=2);// %= use reminder 2 na ave atle 0 print they
    
    return 0;
}
