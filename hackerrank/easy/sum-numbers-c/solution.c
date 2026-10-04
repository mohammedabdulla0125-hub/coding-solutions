#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    float c, d;

    // Read integer and float inputs
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    // Print integer sum and difference
    printf("%d %d\n", a + b, a - b);

    // Print float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}
