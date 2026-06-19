# include <stdio.h>
int main()
{
    int number;
    printf("enter any number in the range of 1 to 7 \n");
    scanf(" %d", &number);
    switch(number)
    {
        case 1:
        printf("the day is monday.");
        break;
         case 2:
        printf("the day is tuesday.");
        break;
         case 3:
        printf("the day is wednesday.");
        break;
         case 4:
        printf("the day is thursday.");
        break;
         case 5:
        printf("the day is friday.");
        break;
         case 6:
        printf("the day is saturday.");
        break;
         case 7:
        printf("the day is sunday.");
        break;
        deafult:
        printf(" choose the number in the range of 1 to 7");
        break;

        return 0;
    }
}