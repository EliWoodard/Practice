#include <iostream>
#include <string>
/**
 * sizeof meausres the amount of bytes so to simplify the process 
 * just devide the first elements size
 **/ 
int main() {
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        std::cout << "car: " << cars[i] << std::endl;
    }

    std::cout << "" << std::endl;

    int myNum[6] = {10, 20, 30, 40, 50, 60};

    for (int i = 0; i < sizeof(myNum) / sizeof(myNum[0]); i++) {
        std::cout << "Number: " << myNum[i] << std::endl;
    }
}