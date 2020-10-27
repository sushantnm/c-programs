// Find all roots of a quadratic equation


// Steps:

// The standard form of a quadratic equation is:
// ax^2 + bx + c = 0, where

// a, b and c are real numbers and
// a != 0
// The term b^2-4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots. ---> discriminant = b*b - 4*a*c

// If the discriminant is greater than 0, the roots are real and different.
// If the discriminant is equal to 0, the roots are real and equal.
// If the discriminant is less than 0, the roots are complex and different.

#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, root1, root2, discriminant, realPart, imaginaryPart;
    
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);

    //------ if will check whether a has non zero value or not----------//
    if(a==0){
    printf("You have entered coefficient a=0, please enter a non zero coefficient for a:\n");
    scanf("%.2f", &a);
    }
    //-------------- end of if statement--------------------------//

    discriminant = (b * b) - (4 * a * c);

    // condition for real and different roots
    if (discriminant > 0){
        root1 = (-b + sqrt((b*b)-4*a*c))/(2*a);
        root2 = (-b - sqrt((b*b)-4*a*c))/(2*a);
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
        // printf("Roots are real and different\n");
    }

    // condition for real and equal roots
    else if (discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
        // printf("Roots are real and equal\n");
    }

    // if roots are not real
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Root 1 = %.2f + %.2fi\nRoot 2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        // printf("Roots are complex and different\n");
    }
    
    return 0;
}