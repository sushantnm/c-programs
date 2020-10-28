// Generate multiplication table

#include<stdio.h>

int main() {
    int n, mul, i;
    printf("Enter a number whose multiplication table you want!\n");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        mul = n * i;
        printf("%d * %d = %d\n", n, i, mul);
    }
    
    return 0;
}