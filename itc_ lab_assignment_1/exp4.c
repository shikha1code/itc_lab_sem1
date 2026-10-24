#include <stdio.h>

int main(){
    int device_ID;
    float voltage;
    char device_type;

    printf("Enter device ID: ");
    scanf("%d",&device_ID);
    printf("Enter voltage: ");
    scanf("%f",&voltage);
    printf("Enter device type code: ");
    scanf(" %c",&device_type);

    printf("\n--- Device Information ---\n");
    printf("Device ID  : %d\n",device_ID);
    printf("Voltage : %.2f V\n",voltage);
    printf("Device Type : %c\n",device_type);


    return 0;
}