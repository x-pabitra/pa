#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int sum=0;
    int lastdigit=0;

    while(n!=0){
        
        lastdigit=n%10;
        if( lastdigit%2==0){
              sum=sum+lastdigit;

        }
       
        n=n/10;


    }
    printf("The sum of digit is %d",sum);
    return 0;
}