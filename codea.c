#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    if(x % 2 == 0)
        printf("Square of %d = %d\n", x, x*x);
    else
        printf("Cube of %d = %d\n", x, x*x*x);

    if(y % 2 == 0)
        printf("Square of %d = %d\n", y, y*y);
    else
        printf("Cube of %d = %d\n", y, y*y*y);
        return 0;
}