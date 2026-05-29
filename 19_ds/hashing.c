#include <ctype.h>

// Simple hash function using the djb2 algorithm
unsigned long hash(const char *str) {
    unsigned long hash = 5381;
    // Convert characters to lowercase for case-insensitive hashing
    int c;

    // Iterate through each character in the string
    while ((c = *str++)) {
        // Hash << 5 is equivalent to multiplying hash by 32,
        // and adding hash is equivalent to multiplying hash by 33
        hash = ((hash << 5) + hash) + tolower(c);
    }

    return hash;
}