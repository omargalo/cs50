#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Represents a node in a linked list
typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;
    
    for (int i = 0; i < 3; i++)
    {
        // Allocate memory for a new node
        node *n = malloc(sizeof(node));
        
        // Check if malloc succeeded
        if (n == NULL)
        {
            return 1;
        }
        
        n->number = get_int("Number: ");
        n->next = list;
        list = n;
    }
    // Print the numbers in the linked list
    /* node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    } */

    // Alternatively, we can use a for loop to traverse the linked list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    return 0;
}