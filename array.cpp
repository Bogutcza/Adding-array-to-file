#include <iostream>
#include "array.h"


void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]=%d\n", i, array[i]);
    }
}


void enterDataIntoArray(int array[]) {
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }
}

int FindMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int FindMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float CalculateAverage(int array[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];

    }

    float average = (float) sum / SIZE;

    return average ;
}
