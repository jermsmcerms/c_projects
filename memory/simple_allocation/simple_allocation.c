#include "simple_allocation.h"

#include <stdlib.h>

int *createIntArray(unsigned int size) {
    return malloc(size * sizeof(int));
}

void freeIntArray(int *intArray, unsigned int size) {
    free(intArray);
}

