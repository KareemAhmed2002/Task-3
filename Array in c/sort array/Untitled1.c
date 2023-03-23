#include<stdio.h>
void main(){
    int i,j,c,temp;
printf("Enter the number of elements");
int r;
scanf("%d",&r);
int arr[r];
printf("Enter the elements of array");
for(i=0;i<r;i++){
    scanf("%d",&arr[i]);
 }
 printf("choose sorting array in ascending or descending order\n press 1 for ascending or 2 for descending");
 scanf("%d",&c);
 if(c==1){
    for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
        }
    }
 }
 printf("the elements after sorting in descending is\n");
for(i=0;i<r;i++){
        printf("%d\t",arr[i]);
}
}
else if(c==2){
            for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
        }
    }
 }

    printf("the elements after sorting in ascending is\n");
     for(i=0;i<r;i++){
        printf("%d\t",arr[i]);
}
}
else
    printf("Enter correct order");
}
