#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int i;

    for( i=1;i<=2*n-1;i++){
        printf("%d  ",i);
    }
return 0;
}