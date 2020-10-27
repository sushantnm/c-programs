// C program to multiply two floating-point numbers

#include<stdio.h>

int main() {
    float num1, num2, mul;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    mul = num1 * num2;
    printf("Multiplication of two numbers: %f\n", mul);
    return 0;
}
