#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
     int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}