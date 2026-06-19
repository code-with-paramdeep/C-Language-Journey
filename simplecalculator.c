#include <stdio.h>
int main()
{
    int a,b;
    char operator;
    printf("enter the first number \n");
    scanf("%d", &a);
    printf("enter the second number \n");
    scanf("%d", &b);
    printf("enter the operator you want to operate among (+ or - or * or /) \n");
    scanf(" %c", &operator);
    switch(operator)
    {
        case '+':
        printf("the result is: %d", a+b);
        break;

         case '-':
        printf("the result is: %d", a-b);
        break;

         case '*':
        printf("the result is: %d", a*b);
        break;

         case '/':
        printf("the result is: %d", a/b);
        break;

        default:
        printf("choose the correct operator");
        break;
    
    return 0;    



    }
}