#include <stdio.h>
int sumTwo(int a, int b) {
return a + b;
}
int absDifference(int a, int b) {
return (a >= b) ? a - b : b - a;
}
int main(void) {
int a, b;
printf("Enter two integers: ");
if (scanf("%d%d", &a, &b) != 2) return 1;
printf("Sum = %d\n", sumTwo(a, b));
printf("Absolute difference = %d\n", absDifference(a, b));
return 0;
}