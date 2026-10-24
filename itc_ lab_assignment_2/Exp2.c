#include <stdio.h>

int main(){
float phy,chem,maths;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f \n",&phy , &chem, &maths);
    float Total = phy + chem + maths;
    printf("Total = %.2f\n",Total);
    printf("Average = %.2f\n",Total/3);

    return 0;
}