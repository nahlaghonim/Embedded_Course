#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, img;
    float discriminant;

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);


    switch(discriminant > 0)
    {
        case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots: %f and %f",
                    root1, root2);
            break;

        case 0:
            switch(discriminant < 0)
            {
                case 1:
                root1 = root2 = -b / (2 * a);
                img = sqrt(-discriminant) / (2 * a);

                printf("Two complex roots : %f + i%f and f - i%f",root1, img, root2, img);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);

                    printf("Two real roots: %f and %f", root1, root2);

                    break;
            }
    }

    return 0;
}
