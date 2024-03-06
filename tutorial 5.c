//PRACTICAL 05

#include<stdio.h>
int main()
{
    //Question 01
    int arr[10];
    int i;
    int sum = 0;
    int min, max;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];


        if (i == 0) {
            min = max = arr[i];
        } else {

            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }


    int average = (float)sum / 10;

    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    printf("\nReversed order of values:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    //Question 02

    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], result[size];

    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int scalarSum = 0;
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }
    printf("\nScalar Sum: %d\n", scalarSum);

    printf("\nVector Sum:\n");
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
        printf("%d ", result[i]);
    }

    printf("\n\nVector Product:\n");
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] * array2[i];
        printf("%d ", result[i]);
    }

    int scalarProductSum = 0;
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] * array2[i];
        scalarProductSum += result[i];
    }
    printf("\n\nScalar Product Sum: %d\n", scalarProductSum);

    //Question 03

    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], result[size];

    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int scalarSum = 0;
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }
    printf("\nScalar Sum: %d\n", scalarSum);

    printf("\nVector Sum:\n");
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
        printf("%d ", result[i]);
    }


    return 0;


}
