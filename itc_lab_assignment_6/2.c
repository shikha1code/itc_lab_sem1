#include <stdio.h>
int greatestOfThree(int a, int b, int c) {
int greatest = a;
if (b > greatest) greatest = b;
if (c > greatest) greatest = c;
return greatest;
}
int main(void) {
int a, b, c;
printf("Enter three integers: ");
if (scanf("%d%d%d", &a, &b, &c) != 3) return 1;
printf("Greatest = %d\n", greatestOfThree(a, b, c));
return 0;
}