#include <stdio.h>

signed int calculateDifference(signed int a, signed int b) {
    return a - b;
}

int main() {
    signed int num1 = -5; // 'signed' is used to declare a signed integer variable
    unsigned int num2 = 10; // 'unsigned' is used to declare an unsigned integer variable
    printf("Difference: %d\n", calculateDifference(num1, num2));
    
    int size = sizeof(int); // 'sizeof' is used to determine the size of a type or variable in bytes
    printf("Size of int: %d bytes\n", size);
    
    static int counter = 0; // 'static' is used to create a variable that retains its value between function calls
    while (counter < 5) {
        printf("Counter: %d\n", counter);
        counter++;
    }
    
    struct Point {
        int x;
        int y;
    }; // 'struct' is used to define a user-defined structure
    
    typedef struct Point Point; // 'typedef' is used to create an alias for a user-defined type
    
    union Data {
        int intValue;
        float floatValue;
        char stringValue[10];
    }; // 'union' is used to define a user-defined union
    
    Point p;
    p.x = 5;
    p.y = 10;
    
    switch (p.x) { // 'switch' is used to perform different actions based on different values
        case 1:
            printf("x is 1\n");
            break;
        case 5:
            printf("x is 5\n");
            break;
        default:
            printf("x is neither 1 nor 5\n");
    }
    
    void greet() { // 'void' is used to specify that a function does not return a value
        printf("Hello, world!\n");
    }
    
    volatile int sensorValue = 100; // 'volatile' is used to indicate that the variable can be modified externally
    
    greet();
    
    return 0;
}

