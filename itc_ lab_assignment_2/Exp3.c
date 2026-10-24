#include <stdio.h>

int main(){
    int a;
    printf("Initial a = ");
    scanf("%d",&a);
    printf("Post-increment a = %d\n",a++);
    printf("After post-increment a = %d\n",a);

    int b;
    printf("\nInitial b = ");
    scanf("%d",&b);
    
    
    printf("Pre-increment b = %d\n",++b);
    printf("After pre-increment b = %d\n",b);


     

    return 0;
}