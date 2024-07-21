#include <stdio.h>
void selection_sort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n - 1; i++) {
       for (j = i + 1; j < n; j++) {
           if (arr[i] > arr[j]) {
               // Swap elements if they are in the wrong order
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
}
int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr) / sizeof(arr[0]);
   selection_sort(arr, n);
   printf("Sorted array: ");
   for (int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}