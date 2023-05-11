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

int test_2() { 
    int value_1 = 2;
    int value_2 = 3;
    int *a = &value_1;
    int *b = &value_2;

    int sum = addTwoNumbers(a, b);
    if(sum == (value_1 + value_2)) {
        return 1;
    }

    printf("addTwoNumbers(int *, int *) failure\n");
    printf("Expected: %i, Actual: %i\n", (value_1 + value_2), sum);
    return 0; 
}

int test_3() { 
    int value_1 = 3;
    int value_2 = 5;
    
    swap(&value_1, &value_2);
    
    if(value_2 == 3 && value_1 == 5) {
        return 1;
    }

    printf("The values from swap(int *, int*) did not swap.\n");

    return 0; 
}

int test_4() { 
    char *ptr = "test string\n";
    printPtrArray(ptr, 12);
    return 1; 
}

int test_5() { 
    char array[10] = { 'a','b','c','d','e','f','g','h','i','j' };
    char reversedArray[10] = { 'j','i','h','g','f','e','d','c','b','a' };

    reverse(array, 10);

    printf("reverse(char *, unsigned int): case 1\n");
    for(int i = 0; i < 10; i++) {
        if(array[i] != reversedArray[i]) {
            printf("reverse(char *, unsigned int)\n");
            printf("Expected: %c, Actual: %c\n", reversedArray[i], array[i]);
            return 0;
        }
    }

    char array_2[11] = { 'a','b','c','d','e','f','g','h','i','j','k' };
    char reversedArray_2[11] = { 'k','j','i','h','g','f','e','d','c','b','a' };

    reverse(array_2, 11);

    printf("reverse(char *, unsigned int): case 2\n");
    for(int i = 0; i < 11; i++) {
        if(array_2[i] != reversedArray_2[i]) {
            printf("reverse(char *, unsigned int)\n");
            printf("Expected: %c, Actual: %c\n", reversedArray_2[i], array_2[i]);
            return 0;
        }
    }

    return 1;
}

int test_6() { return 0; }

int test_7() { return 0; }

int test_8() { return 0; }

int test_9() { return 0; }

int test_10() { return 0; }

void run() {
    int num_tests = 10;
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

    printf("%i of %i tests pass\n", num_pass, num_tests);
}

