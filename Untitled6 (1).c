#include <stdio.h>

int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int valueToFind = 7;

    int position = searchElement(array, size, valueToFind);

    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", valueToFind, position);
    } else {
        printf("Phan tu %d khong duoc tim thay.\n", valueToFind);
    }

    return 0;
}
