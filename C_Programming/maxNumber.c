#include <stdio.h>

int main() {
    int n, i;
    float max, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &max);

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("Maximum number = %.2f\n", max);
    return 0;
}