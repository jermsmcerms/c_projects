#include "simple_allocation.h"

#include <stdlib.h>

int *createIntArray(unsigned int size) {
    return (int*)malloc(size * sizeof(int));
}

void freeIntArray(void **intArray, unsigned int size) {
    free(*intArray);
    *intArray = NULL;
}

