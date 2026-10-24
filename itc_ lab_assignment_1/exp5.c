#include <stdio.h>

int main(){
    int roll;
    int age;
    float phy_marks;
    float maths_marks;
    float programming_marks;
    char section;

    printf("Enter roll number: ");
    scanf("%d",&roll);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter Physics Marks: ");
    scanf("%f",&phy_marks);
    printf("Enter Mathematics marks: ");
    scanf("%f",&maths_marks);
    printf("Enter Programming marks: ");
    scanf("%f",&programming_marks);
    printf("Enter section: ");
    scanf(" %c",&section);

    printf("\n ========== ACADEMIC RECORD ========== \n");
    printf("Roll Number : %d\n",roll);
    printf("Age         : %d\n",age);
    printf("Section     : %c\n",section);
    printf("Physics     : %.2f\n",phy_marks);     
    printf("Mathematics : %.2f\n",maths_marks);
    printf("Programming  : %.2f\n",programming_marks);
    printf("=========================================");

    return 0;
}