#include<stdio.h> 
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
int sum=0;
int lastdigit=0;
while(n!=0){
	lastdigit=n%10;
    sum=sum+lastdigit;
    n=n/10;
	
	
}
printf("the sum of digits is %d",sum);
	return 0;

}