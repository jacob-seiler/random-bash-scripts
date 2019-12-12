#include <stdio.h>

int main()
{
    int prev = 0;
    int result = 0;

    do
    {
        printf("enter a number: ");
        prev = result;
        scanf("%i", &result);

        if (prev == 0 || result == 0)
            continue;

        printf("difference = %i\n", (result - prev));

    } while (result != 0);

    return 0;
}
