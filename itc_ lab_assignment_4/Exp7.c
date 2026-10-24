#include <stdio.h>

int main(){
    int number,digit, count=0;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number==0){
        count=1;
    }


    else{
        while(number != 0){

        digit = number%10;
        ++count;//count++;
        number = number/10;
        }

    }
    printf("No of digits = %d\n",count);
    return 0;

    
}