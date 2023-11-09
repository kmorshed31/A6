#include <stdio.h>

void sort(int *a, int n) {
    int *i, *j, tem;
    for (i = a; i < a + n - 1; ++i) {
        for (j = i + 1; j < a + n; ++j) {
            if (*i > *j) {
                tem = *i;
                *i = *j;
                *j = tem;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    sort(array, n);//sort    
    for (int *ptr = array; ptr < array + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    return 0;
}