#include<stdio.h>

int main() {
    int a, b, result;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Choose one +, -, /, *, : ");
    scanf(" %c", &operation);  

    switch(operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '/':
            result = a / b;
            break;
        case '*':
            result = a * b;
            break;
        default:
            printf("Invalid input\n");
            return 1;  
    }

    printf("Result: %d\n", result);

    return 0;
}
