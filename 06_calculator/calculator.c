#include <cs50.h>
#include <stdio.h>

void add(float x, float y);
void subtract(float x, float y);
void multiply(float x, float y);
void divide(float x, float y);

int main(void)
{
    float x = get_float("Enter the first number: ");
    float y = get_float("Enter the second number: ");

    add(x, y);
    subtract(x, y);
    multiply(x, y);
    divide(x, y);

    return 0;
 
}

void add(float x, float y)
{
    float sum = x + y;
    printf("%f\n", sum);
}

void subtract(float x, float y)
{
    float difference = x - y;
    printf("%f\n", difference);
}

void multiply(float x, float y)
{
    float product = x * y;
    printf("%f\n", product);
}

void divide(float x, float y)
{
    if (y != 0)
    {
        float quotient = x / y;
        printf("%f\n", quotient);
    }
    else
    {
        printf("Error: Division by zero is undefined.\n");
    }
}