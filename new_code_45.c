#include<stdio.h>
int palindrome(int n){
int original,reverse;
    original=n;
    reverse=0;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    if (original==reverse)
        return 1;
    else
        return 0;
}

int main(){
    int n=515;
    if(palindrome(n))
    printf("The palindrome number of %d is %d",n,palindrome(n));
    else
    printf("%d is not a palindrome number", n);
    return 0;
}