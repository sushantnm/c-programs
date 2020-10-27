// Check whether a number is even or odd

#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is an even number\n", num);
    }
    else
    {
        printf("%d is an odd number\n", num);
    }
    
    return 0;
}