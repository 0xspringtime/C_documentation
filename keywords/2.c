#include <stdio.h>

float calculateAverage(float arr[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    float value = 3.14; // 'float' is used to declare a floating-point variable
    for (int i = 0; i < 10; i++) { // 'for' is used for loop iterations
        if (i == 5) { // 'if' is used for conditional statements
            goto label; // 'goto' is used to jump to a specified label
        }
        printf("%d\n", i);
    }
    
    label: // Label for 'goto' statement
    int x = 10;
    int y = 5;
    if (x > y) {
        printf("x is greater than y\n");
    }
    
    inline int addNumbers(int a, int b) { // 'inline' suggests the compiler to inline the function
        return a + b;
    }
    
    int result = addNumbers(3, 5);
    
    int num = 42; // 'int' is used to declare an integer variable
    long bigNum = 1234567890L; // 'long' is used to declare a long integer variable
    register int count = 0; // 'register' suggests the compiler to store the variable in a register for faster access
    
    int array[] = {1, 2, 3, 4, 5};
    return array[2]; // 'return' is used to exit the function and return a value
    
    short smallNum = 32767; // 'short' is used to declare a short integer variable
    
    return 0;
}

