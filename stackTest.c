#include <stdio.h>

struct stackCell
{
    int value;
    struct stackCell *previous; // pointer to previous cell
};

// A stack is represented by a pointer to the top cell.
// For an empty stack, the pointer is NULL.
typedef struct
{
    struct stackCell *top;
} intStack;

/*
 * Returns the value from the top of a stack.
 * Does not change the stack.
 * Parameter: a pointer to a stack
 * Return value: the top value in the stack
 * If the stack is empty, returns zero.
 */
int top(intStack *stk)
{
    return 0;
}

/*
 * Pushes a value onto the top of a stack.
 * Parameters:
 *   Pointer to a stack
 *   Value to push onto the stack
 */
void push(intStack *stk, int newval)
{
}

/*
 * Pops the top value from the top of a stack.
 * Parameter: pointer to a stack.
 * If the stack is empty, does nothing
 */
void pop(intStack *stk)
{
}

/*
 * Prints the contents of a stack from top to bottom.
 * If the stack is empty, prints "empty".
 * Parameter: pointer to a stack
 */
void printStack(intStack *stk)
{
    if (stk == NULL || stk->top == NULL)
    {
        printf("empty\n");
        return;
    }

    struct stackCell *current = stk->top;

    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->previous;
    }

    printf("\n");
}

int main()
{
    // intStack myStack;
    // myStack.top = NULL; // empty stack
    // int i;
    // for (i = 1; i <= 4; i++) {
    //     push(&myStack, i);
    //     printStack(&myStack);
    // } // end for
    // printf("\n");

    // while (myStack.top != NULL) {
    //     printf("top element: %d\n", top(&myStack));
    //     pop(&myStack);
    //     printStack(&myStack);
    // } // end myStack

    struct stackCell cell2;
    cell2.value = 2;

    struct stackCell cell;
    cell.value = 1;
    cell.previous = &cell2;

    intStack myStack;
    myStack.top = &cell;

    printStack(&myStack);

    return 0;
} // end main