#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}