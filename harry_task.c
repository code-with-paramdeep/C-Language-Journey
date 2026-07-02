#include <stdio.h>
int main(){

char num;
float p;
while(1)
{
printf("press 1 for kms to miles\n press 2 for inches to foot\n press 3 for cm to foot\n press 4 to pound to kg\n press 5 for  inches to meters\n press q for quit\n");
printf("enter your choice: ");
scanf("%c", &num);
if (num=='q')

    printf("you are quitting the programme");
    break;
}
    printf("enter the unit you want to convert : ");
    scanf("%f", &p);

 switch(num) 
 {
    case '1':
    printf("%f kms equals: %f miles", p, p*0.6213 ); 
    break;
    case '2':
    printf("%2f inches to %2f foot", p, p*0.0833);
    break;
    case '3':
    printf("%f cm to %f foot", p, p*0.394);
    break;
    case '4':
    printf("%f pounds to %f kg", p, p*454); 
    break; 
    case '5':  
    printf("%f inches to %f meter", p, p*0.0254);
    default:
    printf("Invalid choice!please select correctly");                                                                                                            

 }
return 0;
}