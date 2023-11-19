#include <stdio.h>

int main() {
    int x = 5;

    int y = 100;

    while ((y % x) == 0) {
        printf("%d\n", y);

        if (y == 0) {
            break;
        } else if (x == y) {
            printf("x equals y\n");
            y = y - 5;
        } else {
            y = y - 5;
        }
    }
    
    printf("Now the switch statement\n");

    y = 100;
    int condition = y % x;

    while (y != 0) {
        switch (condition)
        {
        case 4:
            printf("4 remainder\n");
        case 3:
            printf("4 remainder\n");
        case 2:
            printf("2 remainder\n");
        case 1:
            printf("1 remainder\n");
        default:
            printf("no remainder\n");
        }
        y--;
        condition = y % x;
    }
}
