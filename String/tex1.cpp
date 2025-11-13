#include <stdio.h>

void stringcpy(char *destination, const char *source) {
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];

    stringcpy(destination, source);

    printf("Chuoi source: %s\n", source);
    printf("Chuoi destination: %s\n", destination);

    return 0;
}
