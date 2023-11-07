#include <stdio.h>
#include <stdbool.h> // Include for `bool` type, available from C99

int main() {
    // Integer types
    int anInteger = 1024;              // Typical integer
    short aShort = 32767;              // Short integer
    long aLong = 2147483647;           // Long integer
    long long aLongLong = 9223372036854775807; // Long long integer
    
    // Unsigned integer types
    unsigned int anUnsignedInt = 1024;
    unsigned short anUnsignedShort = 65535;
    unsigned long anUnsignedLong = 4294967295;
    unsigned long long anUnsignedLongLong = 18446744073709551615u;

    // Character type
    char aChar = 'A';                  // Character

    // Floating-point types
    float aFloat = 3.14159f;           // Single precision floating point
    double aDouble = 3.141592653589793; // Double precision floating point
    long double aLongDouble = 3.14159265358979323846L; // Extended precision float

    // Boolean type
    bool aBool = true;                 // Boolean value

    return 0;
}
