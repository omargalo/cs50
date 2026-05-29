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
    // Memory for a linked list of nodes
    node *list = NULL;
    
    // Build list
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
        // Set next to NULL since this will be the last node in the list
        n->next = NULL;

        // If list is empty, set list to point to new node
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }

        // Otherwise, append new node to end of list
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If we are at the end of the list
                if (ptr->next == NULL)
                {
                    // Append new node
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // Print list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}