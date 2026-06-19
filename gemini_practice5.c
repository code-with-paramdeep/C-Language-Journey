#include <stdio.h>
int main()
{
    float principal, roi, time;
    printf("enter the principal amount, rate of interest, time of investment respectively and separated by space \n");
    scanf("%f %f %f", &principal, &roi, &time);
    printf(" your simple interest is: %.2f", (principal * roi * time)/100.0  );
    return 0;
}