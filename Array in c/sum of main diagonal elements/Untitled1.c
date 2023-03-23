
#include<stdio.h>
void main(){
    double sum=0;
    printf("enter the number of rows");
    int r;
    scanf("%d", &r );
    printf("enter the number of columns");
    int c;
    scanf("%d", &c );
    double arr[r][c];
    printf("enter the elements");
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
            if(j==i){
                sum=sum+arr[i][j];}}}

printf("sum of main diagonal elements is %d ",sum);}
