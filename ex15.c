// Find the sum of natural numbers

#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("How many natural numbers sum you want to calculate?\n");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers is %d", n, sum);
    return 0;
}   