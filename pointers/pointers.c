#include "pointers.h"

#include <stdlib.h>
#include <stdio.h>

char *initPointer(char val) {
    char *ptr = NULL;
    ptr = malloc(sizeof(char));
    ptr = &val;
    return ptr;
}
