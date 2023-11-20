#include <iostream>

int main() {
    int x = 5;
    int y = 100;

    while((y % x) == 0) {
        std::cout << "i is: " << y << std::endl;

        if (y == 0) {
            break;
        } else if (x == y){ 
            std::cout << "x equals y" << std::endl;
            y = y -5;
        } else {
            y = y - 5;
        }
    }

    std::cout << "Now the swtich statement" << std::endl;

    y = 100;
    int condition = y % x;

    while (y != 0) {
        switch (condition)
        {
        case 4:
            std::cout << "4 remainder" << std::endl;
        case 3:
            std::cout << "3 remainder" << std::endl;
        case 2:
            std::cout << "2 remainder" << std::endl;
        case 1:
            std::cout << "1 remainder" << std::endl;
        default:
            std::cout << "no remiander" << std::endl;
        }
        y--;
        condition = y % x;
    }
}