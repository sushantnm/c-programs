//// Find the largest number among three numbers


// // Using if Statement

#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

        if(num1 >= num2 && num1 >= num3)
        {
            printf("%d is largerst number\n", num1);
        }
        if (num2 >= num1 && num2 >= num3)
        {
            printf("%d is largerst number\n", num2);
        }
        if (num3 >= num1 && num3 >= num2)
        {
            printf("%d is largerst number\n", num3);
        }
    return 0;
}




// //Using if...else Ladder

// #include <stdio.h>
// int main() {
//     int n1, n2, n3;
//     printf("Enter three numbers:\n");
//     scanf("%d %d %d", &n1, &n2, &n3);

//     // if n1 is greater than both n2 and n3, n1 is the largest
//     if (n1 >= n2 && n1 >= n3)
//         printf("%d is the largest number.", n1);

//     // if n2 is greater than both n1 and n3, n2 is the largest
//     else if (n2 >= n1 && n2 >= n3)
//         printf("%d is the largest number.", n2);

//     // if both above conditions are false, n3 is the largest
//     else
//         printf("%d is the largest number.", n3);

//     return 0;
//}




// //Using Nested if...else

#include <stdio.h>
// int main() {
//     int n1, n2, n3;
//     printf("Enter three numbers:\n");
//     scanf("%d %d %d", &n1, &n2, &n3);

//     if (n1 >= n2) {
//         if (n1 >= n3)
//             printf("%d is the largest number.", n1);
//         else
//             printf("%d is the largest number.", n3);
//     } else {
//         if (n2 >= n3)
//             printf("%d is the largest number.", n2);
//         else
//             printf("%d is the largest number.", n3);
//     }

//     return 0;
// }