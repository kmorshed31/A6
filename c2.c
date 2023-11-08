

/*2. Write a C program to return multiple values from a function. Follow the instructions below:

(a) Create a function called getMinMaxAvg() that receives 5 parameters (an array, the size of the
array, a pointer called min, another pointer called max, another pointer called average)

(b) In main() let the user enter the size of the array and enter the elements in the array.

(c) Let main() call getMinMaxAvg.

(d) The function getMinMaxAvg() will return the minimum value of the array received and the
maximum value in the array as well as the average of all the values in the array to the calling
function*/

#include <stdio.h>


void getMinMaxAvg(int *array, int size, int *min, int *max, float *average) {
    *min = *max = array[0]; 
    int sum = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < *min) {
            *min = array[i]; r
        }
        if (array[i] > *max) {
            *max = array[i]; 
        }
        sum += array[i]; /
    }

    *average = (float)sum / size; 
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Size must be positive.\n");
        return 1;
    }

    int array[size]; 
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int min, max;
    float average;

   
    getMinMaxAvg(array, size, &min, &max, &average);

  
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    return 0;
}
