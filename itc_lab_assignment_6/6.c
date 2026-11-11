#include <stdio.h>
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
int main(void) {
double a, b;
char op;
printf("Enter expression (e.g. 8 * 2): ");
if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;
switch (op) {
case '+': printf("Result = %.2f\n", add(a, b)); break;
case '-': printf("Result = %.2f\n", subtract(a, b)); break;
case '*': printf("Result = %.2f\n", multiply(a, b)); break;
case '/':
if (b == 0.0) printf("Error: division by zero.\n");
else printf("Result = %.2f\n", divide(a, b));
break;
default: printf("Unsupported operator.\n");
}
return 0;
}