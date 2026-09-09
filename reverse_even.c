#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    // if(n % 2 != 0)
    //     n--;

    for(i = n; i >= 2; i = i - 2)
    {
         if(i % 2 == 0)
        printf("%d ", i);
    }

    return 0;
}