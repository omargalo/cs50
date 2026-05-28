#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // use "w" to write to a file, which will overwrite the file if it already exists
    // use "a" to append to a file, which will add to the end of the file if it already exists
    // use "r" to read from a file, which will return NULL if the file does not exist
    // use "r+" to read and write to a file, which will return NULL if the file does not exist
    // use "w+" to read and write to a file, which will create the file if it does not exist and overwrite the file if it already exists
    // use "a+" to read and append to a file, which will create the file if it does not exist and add to the end of the file if it already exists
    // use "b" to open a file in binary mode, which is necessary for reading and writing binary files such as images and audio files
    // use "t" to open a file in text mode, which is the default mode and is used for reading and writing text files such as CSV files
    FILE *file = fopen("phonebook.csv", "a+");

    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);
    fclose(file);
    return 0;
}