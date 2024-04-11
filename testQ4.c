#include <stdio.h>

void squareElements(int arr[], int n) {
   
    for (int i = 0; i < n; i++) {
        * (arr + i) *= * (arr + i);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    squareElements(arr, n);

    printf("Squared array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


}
