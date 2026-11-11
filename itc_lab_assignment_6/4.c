#include <stdio.h>
unsigned long long factorial(int n) {
unsigned long long result = 1;
for (int i = 2; i <= n; i++)
result *= (unsigned long long)i;
return result;
}
int main(void) {
int n;
printf("Enter n (0 to 20): ");
if (scanf("%d", &n) != 1) return 1;
if (n < 0 || n > 20) {
printf("Input out of supported range.\n");
return 1;
}
printf("%d! = %llu\n", n, factorial(n));
return 0;
}