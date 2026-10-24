#include <stdio.h>

int main(){
    int roll;
    int age;
    char section;

    printf("Enter roll number: ");
    scanf("%d",&roll);

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Enter section: ");
    scanf(" %c",&section);

    printf("\n--- Student Information ---\n");
    printf("Roll Number : %d\n",roll);
    printf("Age : %d\n",age);
    printf("Section : %c\n",section);


    return 0;
}
