#include <stdio.h>
int main()
{
    float temparature;
    printf("enter the temparature in °c");
    scanf("%f", &temparature);
    printf("the temparature in farenhite is: %.2f °f", (temparature * 9.0/5.0)+32.0);
    return 0;
}