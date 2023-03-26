#include<stdio.h>
void main(){
/*printf("enter the number of rows");
int r;
scanf("%d",&r);
printf("enter the number of columns");
int c;
scanf("%d",&c);*/
double arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
/*printf("enter the elements in array \n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",arr[i][j]);
    }
}*/
printf("enter the row number of element you want to search");

int *p,rr,cc;
scanf("%d",&rr);
printf("enter the column number of element you want to search");
scanf("%d",&cc);
for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
           if(i==rr&&j==cc){
            p=&arr[i][j];
            break;
           }

}
printf("the element you search in row %d and column %d is %d",rr,cc,p);}}

