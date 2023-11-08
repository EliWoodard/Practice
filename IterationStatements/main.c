#include <stdio.h>

// To compile run g++ -o storeOutputName main.c and then .\storeOutputName

int main() {
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("i is: %d\n", i);
    }

    i = 0;
    printf("\n");

    while (i < 5) {
        printf("i is: %d\n", i);
        i++;
    }
}