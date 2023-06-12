#include <stdio.h>
#include <threads.h>

int threadFunction(void* arg) {
    printf("Inside threadFunction\n");
    return 0;
}

int main() {
    thrd_t thread; // An implementation-defined complete object type identifying a thread
    
    if (thrd_create(&thread, threadFunction, NULL) == thrd_success) {
        printf("Thread created successfully\n");
    }
    
    if (thrd_equal(thread, thrd_current())) {
        printf("The thread identifiers refer to the same thread\n");
    }
    
    thrd_sleep(&(struct timespec){.tv_sec = 1}, NULL); // Suspends execution of the calling thread for the given period of time
    
    thrd_yield(); // Yields the current time slice
    
    thrd_exit(0); // Terminates the calling thread
    
    thrd_detach(thread); // Detaches the thread
    
    int result;
    if (thrd_join(thread, &result) == thrd_success) { // Blocks until a thread terminates
        printf("Thread joined successfully with result: %d\n", result);
    }
    
    const int thrd_success = 0; // Indicates a thread success status
    const int thrd_timedout = 1; // Indicates a thread timeout status
    const int thrd_busy = 2; // Indicates a thread busy status
    const int thrd_nomem = 3; // Indicates a thread out-of-memory status
    const int thrd_error = 4; // Indicates a thread error status
    
    typedef int(*thrd_start_t)(void*); // A typedef of the function pointer type int(*)(void*), used by thrd_create
    
    return 0;
}

