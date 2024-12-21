#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Please give me your first number: ");
    scanf("%d", &a);
    printf("Please give me your second number: ");
    scanf("%d", &b);
    printf("What is your operator (+, -, /, *): ");
    scanf(" %c", &c); // توجه به فضای خالی قبل از %c

    if (c == '+')
    {
        printf("The sum is: %d\n", a + b);
    }
    else if (c == '-')
    {
        printf("The difference is: %d\n", a - b);
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            printf("The division is: %d\n", a / b);
        }
    }
    else if (c == '*')
    {
        printf("The product is: %d\n", a * b);
    }
    else
    {
        printf("Invalid operator. Please use +, -, /, or *.\n");
    }

    return 0;
}
