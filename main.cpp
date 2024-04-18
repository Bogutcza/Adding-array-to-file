#include <iostream>
#define SIZE 10

#include "array.h"

void menu() {
    printf("Simple array\n\n");

    printf("1. Enter the values into the array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Deterime the maximum value\n");
    printf("5. Determine the average value\n");

    printf("0. EXIT\n");
    printf("Select an option:\n");
}


int main() {
    int array[SIZE] = {1, 2, 3, -4, 50, 6, 7, 8, 9, 10};


    int option = 0;
    int max = FindMaximumValue(array);
    int min = FindMinimumValue(array);
    float average = CalculateAverage(array);

    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                printf("Enter the values into the array\n\n");
                enterDataIntoArray(array);
                break;
            case 2:
                printf("Display the content of the array\n\n");
                displayArray(array);
                break;
            case 3:
                printf("Determine the minimum value\n\n");
                printf("Minimum value=%d\n\n", FindMinimumValue(array));
                break;
            case 4:
                printf("Deterime the maximum value\n\n");
                printf("Maximum value=%d\n\n", FindMaximumValue(array));
                break;
            case 5:
                printf("Determine the average value\n\n");
                printf("Average value=%f\n\n", CalculateAverage(array));
                break;



            default:
                printf("choose the right option\n\n");


        }

    }
    while (option != 0);
    {
        printf("END\n");
    }
    return 0;


}
