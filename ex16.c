// Find factorial of a number

#include<stdio.h>

int main() {
    unsigned int fact = 1;
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {   
        for(i = 1; i <=n; i++){
            fact *= i;
        }
        printf("Factorial of %d is %u", n, fact);
    }
    
    return 0;
}