
#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("The frequency of each element in the array is:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
/*#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    //Array fr will store frequencies of element
    int fr[length];
    int visited = -1;

    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                //To avoid counting same element again
                fr[j] = visited;
            }
        }
        if(fr[i] != visited)
            fr[i] = count;
    }

    //Displays the frequency of each element present in array
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");
    for(int i = 0; i < length; i++){
        if(fr[i] != visited){
            printf("    %d", arr[i]);
            printf("    |  ");
            printf("  %d\n", fr[i]);
        }
    }
    printf("---------------------\n");
    return 0;
}*/
