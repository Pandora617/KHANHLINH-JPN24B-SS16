#include <stdio.h>

void updateElement(int *arr, int newValue, int position) {
    arr[position] = newValue;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang truoc khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int newValue = 99;
    int position = 2;

    updateElement(array, newValue, position);

    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
