#include "pointers.h"

#include <stdlib.h>
#include <stdio.h>

char *initPointer(char val) {
    char *ptr = NULL;
    ptr = malloc(sizeof(char));
    ptr = &val;
    return ptr;
}

int addTwoNumbers(int *a, int *b) {
    return *a + *b;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printPtrArray(char *ptr, unsigned int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", ptr[i]);
    }
}

void reverse(char *ptr, unsigned int size) {
    int end = size - 1;
    for(int i = 0; i < size/2; i++) {
        int temp = ptr[i];
        ptr[i] = ptr[end];
        ptr[end] = temp;
        end--;
    }
}
