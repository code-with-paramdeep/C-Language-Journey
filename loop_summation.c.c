#include <stdio.h>
int main()
{
    int i,j;
    j=0;
    for(i=1; i<=10; i++)
    {
        j=j+i;
        printf("the summation of first 10 natural number is:%d", j)
    }
    return 0;
}