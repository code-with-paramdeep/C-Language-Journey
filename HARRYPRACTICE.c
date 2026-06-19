#include <stdio.h>
int main()
{
    int number;
    printf("enter the number you want the table \n");
    scanf("%d", &number);                    
    printf("the table is: \n");                  
    printf(" %d * 1 = %d\n", number,number*1);
    printf(" %d  * 2 = %d\n", number,number*2);         //Double cotation er moddhe joto gulo %d thakbe next koma er pore totogulo arguement thaktei hobe.//
    printf(" %d  * 3 = %d\n", number,number*3);          
    printf(" %d  * 4 = %d\n", number,number*4);         /* example:- ekahne jamon double cotation er moddhe duto %d achhe, tai 1st %d ta first koma er pore je variable(number ekahne) achhe oita accept korbe then 2nd %d ta second koma er porer variable ta choose korbe(ekane jeta number*1/2/3..)*/
    printf(" %d  * 5 = %d\n", number,number*5);
    printf(" %d  * 6 = %d\n", number,number*6);
    printf(" %d  * 7 = %d\n", number,number*7);
    printf(" %d  * 8 = %d\n", number,number*8);
    printf(" %d  * 9 = %d\n", number,number*9);
    printf(" %d  * 10 = %d\n", number, number*10);
    return 0;

}