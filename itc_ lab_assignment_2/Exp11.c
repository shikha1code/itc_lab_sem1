#include <stdio.h>

int main(){
    int a, b, c, d;
int result;
printf("Enter four integers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
result = (a + b) * c - d / 2 + a % b;
printf("Result = %d\n", result);

    return 0;
}