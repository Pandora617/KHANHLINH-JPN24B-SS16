#include <stdio.h>

void calculateSum(int a, int b, int *result) {
    *result = a + b;
}

int main() {
    int num1 = 15;
    int num2 = 25;
    int sum;

    calculateSum(num1, num2, &sum);

    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);

    return 0;
}
