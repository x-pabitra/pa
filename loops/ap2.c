#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=4;i<=3*n-3;i=i+3){
        printf("%d  ",i);
    }
    return 0;
}