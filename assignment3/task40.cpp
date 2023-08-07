#include <stdio.h>

void bubbleSort(int arr[], int n, int order) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (order == 1) { 
                if (arr[j] > arr[j + 1]) {
                    
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if (order == 2) { 
                if (arr[j] < arr[j + 1]) {
                    
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int n, i, order;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &order);

    printf("\nBefore sorting:\n");
    printf("First Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    bubbleSort(arr1, n, order);
    bubbleSort(arr2, n, order);

    printf("\n\nAfter sorting:\n");
    printf("First Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

