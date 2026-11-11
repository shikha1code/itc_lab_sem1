#include <stdio.h>
char gradeFor(int marks) {
if (marks >= 90) return 'A';
else if (marks >= 80) return 'B';
else if (marks >= 70) return 'C';
else if (marks >= 60) return 'D';
else return 'F';
}
int main(void) {
int marks;
printf("Enter marks (0-100): ");
if (scanf("%d", &marks) != 1) return 1;
if (marks < 0 || marks > 100) {
printf("Invalid marks.\n");
return 1;
}
printf("Grade = %c\n", gradeFor(marks));
return 0;
}