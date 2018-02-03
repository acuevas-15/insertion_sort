#include <stdio.h>
#include <stdlib.h>

void shuffle(int keys[], int from, int to) {
    int inserting = keys[from];
    while(from >= to) {
	int moving = keys[to];
	keys[to] = inserting;
	inserting = moving;
	to++;
    }
}

void printArr(int keys[], int size) {
    for (int i = 0; i < size; i++) 
	printf("%d\n", keys[i]);
}

/**
 * For each element el in keys, compare el to each previously sorted element.
 * If el is less than an element coming before it, insert it before said element and quit comparing.
 */
void insertion_sort(int keys[], int size) {
    for (int position = 1; position < size; position++) {// for each element
	//compare this element against all previously swapped elements
	int targetPosition = -1;
        for (int considering = 0; considering <= position; considering++) {
            if (keys[position] < keys[considering]) {
		targetPosition = considering;
		break;
	    }
        }
	if (targetPosition > -1) {
	    shuffle(keys, position, targetPosition);
	}
    }
}

int main() {
    int keys[] = {4, 3, 2, 1, 5, 6, 8, 20, 11, 2};
    int size = sizeof(keys) / sizeof(1); 

    insertion_sort(keys, size);

    printf("-----------------------------\n");
    printf("results: \n");
    printArr(keys, size);
}
