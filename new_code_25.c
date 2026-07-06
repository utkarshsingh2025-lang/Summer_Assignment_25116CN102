#include<stdio.h>
long factorial(long n){
    if(n == 0 || n == 1)
    return 1;

    return n * factorial(n-1);
}
int main(){
long fact,n,i;
printf("Enter a number: ");
scanf("%ld",& n);

fact = factorial(n);

printf(" Factorial is %ld:",fact);
return 0;
}

