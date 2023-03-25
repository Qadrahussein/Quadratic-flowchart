#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots of the quadratic equation are: %.2lf and %.2lf\n", root1, root2);
    } else {
        double real_part = -b / (2*a);
        double imaginary_part = sqrt(-discriminant) / (2*a);
        printf("The roots of the quadratic equation are: %.2lf+%.2lfi and %.2lf-%.2lfi\n", real_part, imaginary_part, real_part, imaginary_part);
    }

    return 0;
}

