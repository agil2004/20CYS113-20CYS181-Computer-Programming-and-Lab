#include<stdio.h>
int main(){
    int a,n;
    printf("Enter a value for x :");
    scanf("%d",&x);
    n=0;
    for(int i=0;i<=x;++i){
        n=n+i;
    }
    printf("Sum of %d numbers = %d",x,n);

}