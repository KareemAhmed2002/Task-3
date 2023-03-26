#include <stdio.h>

int main() {
   int arr[100], n, i, search, pos = -1;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements in the array: ", n);
   for(i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the element to search: ");
   scanf("%d", &search);

   // Search for the element in the array
   for(i = 0; i < n; ++i) {
      if(arr[i] == search) {
         pos = i;
         break;
      }
   }

   if(pos == -1) {
      printf("Element not found in the array.");
   }
   else {
      printf("Element found at position %d.", pos+1);
   }

   return 0;
}
