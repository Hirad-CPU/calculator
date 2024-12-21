#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Please give me your first number: ");
    int b = get_int("Please give me your second number: ");
    char c = get_char("What is your operator (+, -, /, *): ");

    if (c == '+')
    {
        int result = a + b;
        printf("The sum is: %i\n", result);
    }
    else if (c == '-')
    {
        int result = a - b;
        printf("The difference is: %i\n", result);
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            int result = a / b;
            printf("The division is: %i\n", result);
        }
    }
    else if (c == '*')
    {
        int result = a * b;
        printf("The product is: %i\n", result);
    }
    else
    {
        printf("Invalid operator. Please use +, -, /, or *.\n");
    }

    return 0;
}
