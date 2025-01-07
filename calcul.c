#include <stdio.h>
#include <stdlib.h>

int multiplication(int a, int b)
{
    return a * b;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{
    return a / b;
}

int main(int argc, char *argv[])
{
    int number1 = 0;
    int number2 = 0;
    int result = 0;
    int usrchoice = 0;

    printf("Enter the first number : ");
    scanf("%d", &number1);

    printf("Enter the second number : ");
    scanf("%d", &number2);

    printf("What operation would you like to perform?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose : ");
    scanf("%d", &usrchoice);

    if (usrchoice == 1)
    {
        result = addition(number1, number2);
        printf("%d + %d = %d\n", number1, number2, result);
    }

    else if (usrchoice == 2)
    {
        result = subtraction(number1, number2);
        printf("%d - %d = %d\n", number1, number2, result);
    }

    else if (usrchoice == 3)
    {
        result = multiplication(number1, number2);
        printf("%d * %d = %d\n", number1, number2, result);
    }

    else if (usrchoice == 4)
    {
        result = division(number1, number2);
        printf("%d / %d = %d\n", number1, number2, result);
    }

    else
    {
        printf("invalid choice\n");
    }

    return 0;
}
