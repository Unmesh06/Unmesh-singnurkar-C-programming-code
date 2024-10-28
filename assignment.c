//Program for Assignment Operators
#include <stdio.h>

int main()
{
    int a = 10;                         // It will Assign value to a
    printf("Value of a is %d\n", a);

    a += 10;                            // It add 10 to the value of a
    printf("Value of a is %d\n", a);

    a -= 10;                            // It will aubtract 10 from Value of a
    printf("Value of a is %d\n", a);

    a *= 10;                            // It will multiply 10 to value of a
    printf("Value of a is %d\n", a);

    a /= 10;                            // It will divide a by 10
    printf("Value of a is %d\n", a);

    a %= 10;
    printf("Value of a is %d\n", a);
    return 0;
}