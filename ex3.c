// C program to add two integers entered by the User

#include<stdio.h>

int main() {
    int num1, num2, add;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    add = num1 + num2;
    printf("Addition of two numbers: %d\n", add);
    return 0;
}