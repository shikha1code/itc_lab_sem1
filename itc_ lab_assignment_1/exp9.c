#include <stdio.h>

int main(){
    int roll,age,sem;
    float cgpa;
    char section,hostel_status_code;
    int lab_courses;
    printf("========== STUDENT REGISTRATION ==========\n");
    printf("Enter roll number: ");
    scanf("%d",&roll);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter semester: ");
    scanf("%d",&sem);
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    printf("Enter section: ");
    scanf(" %c",&section);
    printf("Enter hostel status code: ");
    scanf(" %c",&hostel_status_code);
    printf("Enter number of laboratory courses: ");
    scanf("%d",&lab_courses);

    printf("\n========== REGISTRATION DETAILS ==========\n");
    printf("Roll Number           : %d\n",roll);
    printf("Age                   : %d\n",age);
    printf("Semester              : %d\n",sem);
    printf("CGPA                  : %.2f\n",cgpa);
    printf("Section               : %c\n",section);
    printf("Hostel Status         : %c\n",hostel_status_code);
    printf("Number of Lab Courses : %d\n",lab_courses);


    printf("====================================");

    return 0;
}