#include <stdio.h>

int main()
{
    int x;
    int y;

    int  input;

    printf("Enter 1 for celsius to farenheit, 2 for farenheit to celsius: ");
    scanf("%d", &input);

    if(input == 1) {
    printf("Enter degree in celsius: ");
    scanf("%d", &x);

    printf("Farenheit: %d \n", (x*(9/5) + 32));

    }

    if(input == 2) {

    printf("Enter degree in farenheit: ");
    scanf("%d", &y);

    printf("Celsius: %d \n", ((y-32) * 5/9) );

    }

}
