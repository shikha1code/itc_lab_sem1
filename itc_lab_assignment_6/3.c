#include <stdio.h>
int isEven(int n) {
return n % 2 == 0;
}
int main(void) {
int n;
printf("Enter an integer: ");
if (scanf("%d", &n) != 1) return 1;
if (isEven(n))
printf("%d is even.\n", n);
else
printf("%d is odd.\n", n);
return 0;
}