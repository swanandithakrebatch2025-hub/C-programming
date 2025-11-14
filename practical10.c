// Swanandi Thakre 25070521086

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char string1[20], strign2[20];
    printf("Enter two strings: ");
    scanf("%s %s", string1, strign2);
    if (strlen(s1) > strlen(strign2))
        printf("%s is longer\n", string1);
    else
        printf("%s is longer\n", strign2);

    float radius, *pointer;


    printf("\nEnter radius: ");
    scanf("%f", &radius);
    pointer = &radius;
    printf("Area = %.2f\n", 3.14 * (*pointer) * (*pointer));
    printf("Circumference = %.2f\n", 2 * 3.14 * (*pointer));

    return 0;
}

