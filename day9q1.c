/*Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d > 0){
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are Real and Distinct\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else{
        if(d == 0){
            root1 = root2 = -b / (2 * a);
            printf("Roots are Real and Equal\n");
            printf("Root1 = Root2 = %.2f\n", root1);
        }
        else{
            realPart = -b / (2 * a);
            imagPart = sqrt(-d) / (2 * a);
            printf("Roots are Imaginary\n");
            printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
            printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
        }
    }

    return 0;
}