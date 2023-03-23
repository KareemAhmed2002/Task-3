#include<stdio.h>
void main(){
int n;
printf("Enter the number");
scanf("%d",&n);
fact(n);

}
void fact(int n){
    int f=1;
for(int i=2;i<=n;i++){
    f*=i;
}
    printf("the factorial number of %d is %d",n,f);
}
