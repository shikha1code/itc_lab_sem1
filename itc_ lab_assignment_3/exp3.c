#include <stdio.h>

int main(){
    int a , b;
    printf("Enter two numbers: ");
    scanf("%d %d ",&a ,&b);

    if (a > b)
    {
       printf("%d is greater\n",a);
    }
    else if(a == b)
{

        printf("a is equal to b\n");
    }
    else
    {
        printf("%d is greater\n",b);
    }
    

    return 0;
}