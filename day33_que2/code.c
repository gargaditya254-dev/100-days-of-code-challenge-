Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, arr[100], element;
    int position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = n;

    for (int i = 0; i < n; i++) {
        if (element < arr[i]) {
            position = i;
            break;
        }
    }

    // Shift elements to the right
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    printf("Array after insertion:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
