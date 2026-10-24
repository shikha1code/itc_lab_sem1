#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int Factorial = 1;

    for(int i = 1; i <= n;i++){
       Factorial *= i;
    }
    printf("Factorial = %d\n",Factorial);
    return 0;
}