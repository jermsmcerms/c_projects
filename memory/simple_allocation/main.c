#include "simple_allocation.h"

#include <stdio.h>

int main() {
    printf("Welcome to the simple memory allocation program!\n");
    int *ptr = createIntArray(100);
    if(ptr) {
        printf("memory allocated for buffer size: 100\n");
    }
    for(int i = 0; i < 100; i++) {
        ptr[i] = i + 1;
    }
    printf("value at index 0: %i\n", ptr[0]);
    freeIntArray(ptr, 100);
    if(ptr[0] == 0) {
        printf("memory freed\n");
    }
    else {
        printf("value at index 0: %i\n", ptr[0]);
    }
    printf("Goodbye!\n");
    return 0;
}
