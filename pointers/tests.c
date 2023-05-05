#include "pointers.h"

#include <stdio.h>
#include <stdlib.h>

static int test_1() {
    char *ptr = initPointer('a');

    if(!ptr) {
        return 0;
    }
    
    if(*ptr == 'a') {
        ptr = NULL;
        return 1;
    }

    // if you get here you probably didn't derefernce your pointer.
    printf("Expected: \'a\'. Actual: %#010x\n", *ptr);

    ptr = NULL; 

    return 0;
}

int test_2() { return 0; }

int test_3() { return 0; }

int test_4() { return 0; }

int test_5() { return 0; }

int test_6() { return 0; }

int test_7() { return 0; }

int test_8() { return 0; }

int test_9() { return 0; }

int test_10() { return 0; }

int test_11() { return 0; }

int test_12() { return 0; }

int test_13() { return 0; }

int test_14() { return 0; }

int test_15() { return 0; }

int test_16() { return 0; }

int test_17() { return 0; }

int test_18() { return 0; }

void run() {
    int num_tests = 18;
    int num_pass = 0;
    
    printf("starting tests...\n");

    num_pass += test_1();
    num_pass += test_2();
    num_pass += test_3();
    num_pass += test_4();
    num_pass += test_5();
    num_pass += test_6();
    num_pass += test_7();
    num_pass += test_8();
    num_pass += test_9();
    num_pass += test_10();
    num_pass += test_11();
    num_pass += test_12();
    num_pass += test_13();
    num_pass += test_14();
    num_pass += test_15();
    num_pass += test_16();
    num_pass += test_17();
    num_pass += test_18();

    printf("%i of %i tests pass\n", num_pass, num_tests);
}

