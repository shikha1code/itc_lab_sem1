#include <stdio.h>
int secondLargest(int a, int b, int c) {
if ((a > b && a < c) || (a < b && a > c)) return a;
if ((b > a && b < c) || (b < a && b > c)) return b;
return c;
}
int main(void) {
int a, b, c;
printf("Enter three distinct integers: ");
if (scanf("%d%d%d", &a, &b, &c) != 3) return 1;
if (a == b || a == c || b == c) {
printf("Values must be distinct.\n");
return 1;
}
printf("Second-largest = %d\n", secondLargest(a, b, c));
return 0;
}