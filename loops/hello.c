#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        printf("%d\n",i);
    }
    return 0;
}