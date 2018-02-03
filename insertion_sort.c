#include <stdio.h>
#include <stdlib.h>
#include "insertion_sort.h"

void printIntArr(int keys[], int size) {
    for (int i = 0; i < size; i++) 
	printf("%d\n", keys[i]);
}

void printDblArr(double keys[], int size) {
    for (int i = 0; i < size; i++) 
	printf("%f\n", keys[i]);
}

int main() {
    int keys[] = {4, 3, 2, 1, 5, 6, 8, 20, 11, 2};
    int size = sizeof(keys) / sizeof(1); 
    INSERTION_SORT(keys, size);
    printIntArr(keys, size);

    printf("----------- Printing doubles -----------\n");

    double doubleKeys[] = {4.3, 3.4, 2.5, 1.9, 5.0, 6.0, 8.0, 20.0, 11.0, 2.5};
    size = sizeof(doubleKeys) / sizeof(1.0); 
    INSERTION_SORT(doubleKeys, size);
    printDblArr(doubleKeys, size);
}
