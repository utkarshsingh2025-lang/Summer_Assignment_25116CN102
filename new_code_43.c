#include<stdio.h>
int checkPrime(int n){
    int i;
    if(n <= 1)
    return 0;
    
    for(i = 2; i < n; i++){
        if( n % i == 0)
        return 0;
    }

    return 1;
}
     
    int main(){
    int a=7 ;

    printf("Enter a number: ");
    scanf("%d", &a);
    if(checkPrime(a))
    printf("%d is a Prime number", a);
    else{
    printf("%d is not a Prime number", a);
    }
    return 0;
    }


