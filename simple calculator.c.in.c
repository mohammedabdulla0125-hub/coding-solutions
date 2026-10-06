
#include <stdio.h>
int main ()
{
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /):");
    scanf("%c", &op);
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    switch (op)
    {
    case '+':
        printf("Result = %.2f\n", a + b);
        break;

    case '-':
        printf("Result = %.2f\n", a - b);
        break;
    case '*':
        printf("Result = %.2f\n", a * b);
        break;
    case '/':
        printf("Result = %.2f\n", a / b);
        break;
    }
    return 0;
}
