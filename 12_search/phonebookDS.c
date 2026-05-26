#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Alice";
    people[0].number = "123-456-7890";

    people[1].name = "Bob";
    people[1].number = "987-654-3210";

    people[2].name = "Charlie";
    people[2].number = "555-555-5555";

    string name = get_string("Enter a name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Name not found\n");
    return 1;

    return 0;
}