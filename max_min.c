#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
