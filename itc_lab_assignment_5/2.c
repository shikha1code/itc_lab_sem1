#include <stdio.h>

int square(int);
int square(int x){
    int p = x*x;
    return p;
}

int main(){
    
    int a;
    scanf("%d",&a);
    printf("The square of a no. is %d",square(a));
    return 0;
}