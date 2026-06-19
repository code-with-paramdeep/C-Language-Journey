# include <stdio.h>
int main()
{
    int number;
    do
    {
    printf("enter any positive number: ");
    scanf("%d", &number);
    
        if(number>=0)
        printf(" you entered: %d \n", number);
    
     } while(number>0);
    
    printf("you have entered a negetive number");
        
    return 0;
}