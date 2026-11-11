#include <stdio.h>
void classifyRoots(double a, double b, double c) {
double d = b * b - 4.0 * a * c;
if (d > 0) puts("Two distinct real roots");
else if (d == 0) puts("Two equal real roots");
else puts("Two complex conjugate roots");
}
int main(void) {
double a, b, c;
printf("Enter a, b, c: ");
if (scanf("%lf%lf%lf", &a, &b, &c) != 3) return 1;
if (a == 0.0) {
puts("Not a quadratic equation: a must not be zero.");
return 1;
};
classifyRoots(a, b, c);
return 0;
}
