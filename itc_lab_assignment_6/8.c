#include <stdio.h>
int isLeapYear(int year) {
return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int main(void) {
int year;
printf("Enter year: ");
if (scanf("%d", &year) != 1 || year <= 0) {
printf("Enter a positive year.\n");
return 1;
};
printf("%d is %sa leap year.\n", year, isLeapYear(year) ? "" : "not ");
return 0;
}