#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
     int a, b;

    printf("Enter two integers:\n");
    if (scanf("%d %d", &a, &b) != 2)
{
    printf("Invalid input. Please enter two integers.\n");
    return 1;
}

    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}