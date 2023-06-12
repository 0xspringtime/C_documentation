#include <stdio.h>
#include <stdalign.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <complex.h>
#include <stdnoreturn.h>
#include <assert.h>

int main() {
    _Alignas(16) char alignedBuffer[64]; // '_Alignas' specifies the alignment of a variable or type
    _Alignof(int) alignment = 0; // '_Alignof' provides the required alignment for a type
    
    atomic_int counter = ATOMIC_VAR_INIT(0); // '_Atomic' declares an atomic object for concurrent access
    
    _Bool flag = true; // '_Bool' is used to declare a boolean variable (true or false)
    
    float complex c = 1.0 + 2.0 * I; // '_Complex' is used to declare a complex number
    
    _Noreturn void infiniteLoop() { // '_Noreturn' indicates that a function never returns
        while (true) {
            // Infinite loop
        }
    }
    
    static_assert(sizeof(int) == 4, "The size of int must be 4 bytes"); // '_Static_assert' performs compile-time assertions
    
    _Thread_local int threadLocalValue = 42; // '_Thread_local' specifies a variable with thread-local storage
    
    return 0;
}

