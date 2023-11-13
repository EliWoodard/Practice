#include <stdio.h>
/**
 * No push or pop functions but I could make some. 
*/
int main() {
    int myNumbers[] = {25, 50, 75, 100};

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        printf("myNumbers at %d is: %d\n", i, myNumbers[i]);
    }
}