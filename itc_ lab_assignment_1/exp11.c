#include <stdio.h>

int main(){
    int device_id,network_id,no_of_sensors;
    float op_voltage,frequency;
    char device_type_code,communication_mode_code;

    printf("========== IOT DEVICE CONFIGURATION ===========\n");
    printf("Enter device ID: ");
    scanf("%d",&device_id);
    printf("Enter network ID: ");
    scanf("%d",&network_id);
    printf("Enter operating voltage: ");
    scanf("%f",&op_voltage);
    printf("Enter sampling frequency: ");
    scanf("%f",&frequency);
    printf("Enter device type code: ");
    scanf(" %c",&device_type_code);
    printf("Enter communication mode code: ");
    scanf(" %c",&communication_mode_code);
    printf("Enter number of sensors: ");
    scanf("%d",&no_of_sensors);

    printf("\n========== DEVICE CONFIGURATION ==========\n");
    printf("Device ID                   : %d\n", device_id);
    printf("Network ID                  : %d\n",network_id);
    printf("Operating Voltage           : %.2f V\n",op_voltage);
    printf("Sampling Frequency          : %.2f Hz\n",frequency);
    printf("Device Type                 : %c\n",device_type_code);
    printf(" Comunication Mode          : %c\n",communication_mode_code);
    printf("Number of Sensors           : %d\n",no_of_sensors);

    printf("==============================================");


    return 0;
}