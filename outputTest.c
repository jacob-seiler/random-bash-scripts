#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;

    // *p = 1
    // *q = 2
    // *r = 3
    printf("line 1: %d, %d, %d\n", *p, *q, *r);

    p = q;
    q = &c;

    // *p = 2
    // *q = 3
    // *r = 3
    printf("line 2: %d, %d, %d\n", *p, *q, *r);

    *p = *q;
    *r = *q + 1;
    *q = 5;

    // *p = 3
    // *q = 5
    // *r = 5
    printf("line 3: %d, %d, %d\n", *p, *q, *r);

    // a = 1
    // b = 3
    // c = 5
    printf("line 4: %d, %d, %d\n", a, b, c);

    int numbers[] =
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};

    // *numbers = 10
    // *(numbers + 2) = 30
    printf("line 5: %d, %d\n", *numbers, *(numbers + 2));

    return 0;
}
