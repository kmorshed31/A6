#include <stdio.h>


void print_in_reverse(float *a, int count) {
    for(int i = count - 1; i >= 0; i--) {
        printf("%f\n", a[i]);
    }
}int main() {
    float array[] = {1.0, 2.5, 3.2, 4.8};
    int count = sizeof(array) / sizeof(array[0]);

    print_in_reverse(array, count);

    return 0;
}


