// Checker whether a character is an alphabet or not

#include<stdio.h>
// #include<stdlib.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("%c is an alphabet\n", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
    
    return 0;
}



// The ASCII value of 'a' is 97, 'z' is 122, 'A' is 65 and 'Z' is 90