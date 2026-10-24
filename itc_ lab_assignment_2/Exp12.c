#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("--- Arithmetic operators ---\n");
    printf("a + b = %d\n",a + b );
    printf("a - b = %d\n",a - b);
    printf("a * b = %d\n",a * b);
    printf("a / b = %d\n",a / b);
    printf("a %% b = %d\n",a % b);

    printf("--- Relational Operators ---");
    printf("a > b = %d\n",a > b);
    printf("a < b = %d\n",a < b);
    printf("a == b = %d\n",a == b);
    printf("a != b = %d\n",a != b);

    printf("--- Logical Operators ---");
    printf("(a > 0) && (b > 0) = %d\n",(a > 0) && (b > 0));
    printf("(a > 0) || (b > 0) = %d\n",(a > 0) || (b > 0));
    printf("!(a>0) = %d\n",!(a>0));

    printf("--- Bitwise Operators ---");
    printf("a & b = %d\n",a & b );
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n" , a ^ b);

    printf("--- Shift Operators ---");
    printf("a << 1 = %d\n",a << 1);
    printf("a >> 1 = %d\n",a >> 1);

    printf("--- Increment/Decrement ---");
    
    printf("Original x = %d\n",a);
    printf("x++ = %d\n",a++);
    printf("After x++ = %d\n",a);
    printf("Original x = %d\n", b);
    printf("--x = %d\n",--b);
    printf("After --x = %d\n",b);

   /* printf("--- Assignment Operators ---");
    int x = 
    printf("After x += b : %d\n",x+=b);
    printf("");
    printf("");
    */





    
    return 0;
}