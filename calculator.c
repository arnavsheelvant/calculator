#include <stdio.h>

int main() {
    char op;
    float a, b;

    scanf("%c %f %f", &op, &a, &b);
   //hi im a calculator
    if (op == '+')
        printf("%.2f", a + b);
    else if (op == '-')
        printf("%.2f", a - b);
    else if (op == '*')
        printf("%.2f", a * b);
    else if (op == '/')
        printf("%.2f", a / b);
    else if (op == '%')
        printf("%.2f", a % b);
    else if (op == '^')
        printf("%.2f", pow(a, b));
    return 0;
}


