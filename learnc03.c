#include<stdio.h>

int main()
{

int x;

printf("Enter an even number:");
scanf("%d", &x);

        while(x >= 1)
                {
                int y = x/2;
                printf("%d", y);
                printf(" ");
                x = y;
                }
}
