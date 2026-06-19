# include <stdio.h>
int main()
{
    int num,i;
    printf("enter the number of what you want the table:\n");
    scanf("%d", &num);
    printf("the table is:\n");

    for(i=1; i<=10; i++)
    {
        printf("%d*%d= %d\n", num, i, num*i );
    }
    return 0;
}