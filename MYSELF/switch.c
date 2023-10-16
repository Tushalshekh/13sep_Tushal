#include<stdio.h>
int main()
{
    char operator;
    int num1,num2;
    printf("enter the two number: ");
    scanf("%d%d",&num1,&num2);

    printf("select the operator: +,-,*,/");
    scanf("%c",&operator);
    
    
    switch(operator){
        case '+':
        printf("%d",num1+num2);
        break;

        case '-':
        printf("%d",num1-num2);
        break;

        case '*':
        printf("%d",num1*num2);
        break;

        case '/':
        printf("%d",num1/num2);
        break;

        default:
        printf("not found");
        break;
    }

     
    



    return 0;
}