//bubble sort
#include <stdio.h>
void  bubblesort(int array[], int size) {
            for (int i = 0; i < size - 1; i++) {
                int temp;
                for (int j = 0; j < size - 1; j++) {
                    if (array[j] > array[j + 1]) {
                        temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
}
void printarray(int array[], int size) {
              for (int i = 0; i < size; i++) {
                printf("%d\t", array[i]);
              }
}
int main() {
    int array[] = {11, 61, 29, 88, 58, 56, 79, 14};
    int size = (sizeof(array) / sizeof(array[0]));
    bubblesort(array, size);
    printarray(array, size);
    return 0;
}
// c
//2
//3