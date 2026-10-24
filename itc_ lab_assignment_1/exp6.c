#include <stdio.h>

int main(){
    int sensor_ID;
    float temp;
    float humidity;
    char code;

    printf("Enter sensor ID: ");
    scanf("%d",&sensor_ID);
    printf("Enter temperature: ");
    scanf("%f",&temp);
    printf("Enter humidity: ");
    scanf("%f",&humidity);
    printf("Enter sensor status code: ");
    scanf(" %c",&code);

    printf("\n--------- SENSOR DATA _________\n");
    printf("Sensor iD    : %d\n",sensor_ID);
    printf("Temperature  : %.2f C\n",temp);
    printf("Humidity     : %.2f %%\n",humidity);
    printf("Status       : %c\n",code);
     printf("--------------------------------");

    return 0;
}