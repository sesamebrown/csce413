#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input)
{
    char buffer[64];       // buffer with fixed size
    strcpy(buffer, input); // used strcpy without bound checking
    printf("You entered: %s\n", buffer);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    vulnerable_function(argv[1]);
    return 0;
}
