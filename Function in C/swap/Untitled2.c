#include<stdio.h>
static int temp;
void main(){
int n1,n2;
printf("enter the frist number");
scanf("%d",&n1);
printf("enter the second number");
scanf("%d",&n2);
swamp(&n1,&n2);
}
void swamp(int *a,int *b){
   temp=*a;
   *a=*b;
   *b=temp;
   printf("The frist number after swamp is %d and the second is %d",*a,*b);

}
