#include <stdio.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

typedef struct ListNode *LinkedList;

int listTotal(LinkedList root)
{
    int sum = 0;

    while (root != NULL)
    {
        sum += root->data;
        root = root->next;
    }

    return sum;
}

int main()
{
    LinkedList node1 = NULL;
    LinkedList node2 = NULL;
    LinkedList node3 = NULL;
    LinkedList node4 = NULL;

    node4 = malloc(sizeof(LinkedList));
    node4->data = 5;

    node3 = malloc(sizeof(LinkedList));
    node3->data = 7;
    node3->next = node4;

    node2 = malloc(sizeof(LinkedList));
    node2->data = 1;
    node2->next = node3;

    node1 = malloc(sizeof(LinkedList));
    node1->data = 3;
    node1->next = node2;

    printf("Total = %i\n", listTotal(node1));

    return 0;
}
