#include<stdio.h>
static int n1=0,n2=1,n3,f;
void main(){
printf("Enter the number of elements");
scanf("%d",&f);
printf("Fibonacci Series is \n 0 \t 1 \t");
fibonacci(f);
}
void fibonacci(int x){
for(int i=0;i<x;i++){
    n3=n1+n2;
    printf("%d\t",n3);
    n1=n2;
    n2=n3;
}
}
