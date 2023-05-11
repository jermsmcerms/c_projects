#include "test.h"
#include "simple_allocation.h"

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int test_1() { 
    ptr = createIntArray(BUFFER_SIZE);
    if(!ptr) {
        return 0;
    }
    return 1; 
} 

int test_2() { 
    if(!ptr) {
        return 0;
    }

    int i;

    // Add data to test that free removes data
    for(i = 0; i < BUFFER_SIZE; i++) {
        ptr[i] = i + 1;
    }

    freeIntArray((void**)&ptr, BUFFER_SIZE);

    if(ptr) {
        printf("printing contents of buffer\n");
        for(i = 0; i < BUFFER_SIZE; i++) {
            printf("%i\n", ptr[i]);
        }

        return 0;
    }
   
    return 1;
} 

void run() {
    int num_tests = 2;
    int num_pass = 0;
    
    num_pass += test_1();
    num_pass += test_2();

    printf("%i out of %i tests passed.\n", num_pass, num_tests);
}

