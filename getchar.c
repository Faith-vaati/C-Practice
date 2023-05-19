#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    c = getchar(); // Read a character from the input stream

    printf("You entered: %c\n", c);

    return 0;
}
