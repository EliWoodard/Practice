#include <iostream>

int main() {
    int i = 0;

    for (i = 0; i < 5; i++) {
        std::cout << "i is: " << i << std::endl;
    }

    std::cout << ""<< std::endl;
    i = 0;

    while (i < 5) {
        std::cout << "i is: " << i << std::endl;
        i++;
    }
}