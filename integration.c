#include <stdio.h>
int main()

{

    int exp, constant;
    char var;
    printf("Enter your equation: ");
    scanf("%d %c %d", &constant, &var, &exp);
    printf("Constant: %d \n variable:%c\n exponential:%d", constant*exp, var, exp -1);
}
