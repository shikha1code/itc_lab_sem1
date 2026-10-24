#include <stdio.h>

int main(){
    int measurement_no;
    float voltage;
    float current;
    char unit_code;

    printf("Enter measurement number: ");
    scanf("%d",&measurement_no);
    printf("Enter voltage: ");
    scanf("%f",&voltage);
    printf("Enter current: ");
    scanf("%f",&current);
    printf("Enter unit code: ");
    scanf(" %c",&unit_code);

    printf("\n======= ELECTRICAL MEASUREMENT =======\n");
    printf("Measurement No    : %d\n",measurement_no);
    printf("Voltage : %.3f V\n",voltage);
    printf("Current  : %.3f A\n",current);
    printf("Unit Code       : %c\n",unit_code);
     printf("==================================");

    return 0;
}