// C program to find ASCII value of a character entered by the user

#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of character %c: %d", ch, ch);
    return 0;
}
