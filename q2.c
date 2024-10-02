//Write a c code to evaluate quadratic equation.Capture coefficients from user
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, img;

    //  coefficients from the user
    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);  

    d = b * b - 4 * a * c;  // Calculate the discriminant

    if (d > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        // One real and equal root
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    } else {
        // Complex roots
        root1 = -b / (2 * a);
        img = sqrt(-d) / (2 * a);  //imaginary part
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", root1, img, root1, img);
    }

    return 0;
}
