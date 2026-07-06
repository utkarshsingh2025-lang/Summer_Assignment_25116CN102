#include<stdio.h>
void perfect(int n){
    int i;
    int sum = 0;
    for( i = 1; i<n ; i++){
    if( n % i==0){
        sum+=i;
    }
    }
    if(sum == n)
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);
}
int main(){
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    perfect(n);

    return 0;
}