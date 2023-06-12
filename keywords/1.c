#include <stdio.h>

int main() {
    auto int num = 10; // 'auto' keyword is optional and can be omitted
    break; // 'break' is used to exit from a loop or switch statement
    case 1: // 'case' is used in switch statements to specify different cases
        printf("This is case 1\n");
        break;
    char ch = 'A'; // 'char' is used to declare a character variable
    const int MAX_VALUE = 100; // 'const' is used to define constants
    continue; // 'continue' is used to skip the current iteration of a loop
    default: // 'default' is used in switch statements as the default case
        printf("This is the default case\n");
    do { // 'do-while' loop executes the block of code at least once
        printf("Hello, world!\n");
    } while (num > 0);
    double pi = 3.14159; // 'double' is used to declare a double-precision floating-point variable
    else { // 'else' is used in conditional statements as an alternative option
        printf("This is the else block\n");
    }
    enum Days { MON, TUE, WED, THU, FRI, SAT, SUN }; // 'enum' is used to define an enumerated type
    extern int externalVariable; // 'extern' is used to declare a variable that is defined elsewhere
    
    return 0;
}

