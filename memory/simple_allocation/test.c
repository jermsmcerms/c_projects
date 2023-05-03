#include "simple_allocation.h"

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int test_1() { 
    int *ptr = createIntArray(BUFFER_SIZE);
    if(!ptr) {
        return 0;
    }
    free(ptr);
    return 1; 
} 

int test_2() { return 0; } 

int test_3() { return 0; }

void run() {
    int num_tests = 3;
    int num_pass = 0;
    
    num_pass += test_1();
    num_pass += test_2();
    num_pass += test_3();

    printf("%i out of %i tests passed.\n", num_tests, num_tests);
}

