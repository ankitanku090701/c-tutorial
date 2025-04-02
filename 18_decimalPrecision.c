#include <stdio.h>

int main()
{
    float a = 3.5;
    double b = 19.99;

    printf("%.1f\n", a);  // Outputs 3.500000
    printf("%.2lf\n", b); // Outputs 19.990000
    return 0;
}