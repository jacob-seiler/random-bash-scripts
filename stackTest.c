#include <stdio.h>
#include <stdlib.h>

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
    if (stk == NULL || stk->top == NULL)
        return 0;

    return stk->top->value;
}

/*
 * Pushes a value onto the top of a stack.
 * Parameters:
 *   Pointer to a stack
 *   Value to push onto the stack
 */
void push(intStack *stk, int newval)
{
    struct stackCell *cell = malloc(sizeof(struct stackCell));
    cell->value = newval;
    cell->previous = stk->top;
    stk->top = cell;
}

/*
 * Pops the top value from the top of a stack.
 * Parameter: pointer to a stack.
 * If the stack is empty, does nothing
 */
void pop(intStack *stk)
{
    if (stk == NULL || stk->top == NULL)
        return;

    stk->top = stk->top->previous;
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

    struct stackCell *current = malloc(sizeof(struct stackCell));
    current->value = stk->top->value;
    current->previous = stk->top->previous;

    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->previous;
    }

    printf("\n");
}

int main()
{
    intStack myStack;
    myStack.top = NULL; // empty stack
    int i;
    for (i = 1; i <= 4; i++)
    {
        push(&myStack, i);
        printStack(&myStack);
    } // end for
    printf("\n");

    while (myStack.top != NULL)
    {
        printf("top element: %d\n", top(&myStack));
        pop(&myStack);
        printStack(&myStack);
    } // end myStack

    return 0;
} // end main