#include <stdio.h>

int main(){
    int id,age,room_no;
    float body_temp,weight;
    char blood_group,gender;
    
    printf("========== PATIENT INFORMATION ===========\n");
    printf("Enter patient ID: ");
    scanf("%d",&id);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter body temperature: ");
    scanf("%f",&body_temp);
    printf("Enter weight: ");
    scanf("%f",&weight);
    printf("Enter blood group code: ");
    scanf(" %c",&blood_group);
    printf("Enter gender code: ");
    scanf(" %c",&gender);
    printf("Enter room number: ");
    scanf("%d",&room_no);

    printf("\n========== PATIENT RECORD ==========\n");
    printf("Patient ID       : %d\n",id);
    printf("Age              : %d\n",age);
    printf("Temperature      : %.2f C\n",body_temp);
    printf("Weight           : %.2f kg\n",weight);
    printf("Blood Group Code : %c      \n",blood_group);
    printf("Gender Code      : %c       \n",gender);
    printf("Room Number      : %d\n",room_no);

    printf("====================================");
    return 0;
}