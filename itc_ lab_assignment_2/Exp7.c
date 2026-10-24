#include <stdio.h>

int main(){
int m1, m2, m3;
int result;
printf("Enter marks of three subjects: ");
scanf("%d %d %d", &m1, &m2, &m3);
result = (m1 >= 40) && (m2 >= 40) && (m3 >= 40);
printf("Result = %d\n", result);
    return 0;
}