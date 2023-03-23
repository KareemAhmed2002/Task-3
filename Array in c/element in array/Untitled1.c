#include<stdio.h>
void main(){
    printf("enter the number of rows");
    int r;
    scanf("%d", &r );
    printf("enter the number of columns");
    int c;
    scanf("%d", &c );
    double arr[r][c];
    printf("enter the elements");
    for(int i=0 ;i<r ; i++){
        for(int j=0 ; j<c ; j++){
           scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements of array is\n");
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
                printf("%d",arr[i][j]);
                printf("\t");
        }
          printf("\n");
    }}

