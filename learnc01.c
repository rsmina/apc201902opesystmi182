#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter another number: ");
    scanf("%d", &y);

    printf("Sum: %d\n", (x + y));
    printf("Product: %d\n", (x * y));


    return 0;
}
