#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    string numbers[] = {"212-555-1234", "650-555-2345", "415-555-3456", "617-555-4567"};

    string name = get_string("Name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Name not found\n");
    return 1;
}