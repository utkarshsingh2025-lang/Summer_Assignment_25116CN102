#include<stdio.h>
#include<math.h>
int armstrong(int n){
int temp,digit,sum = 0;
temp = n;

while(temp!= 0){
    digit = temp%10;
    sum+= digit*digit*digit;
    temp /= 10;
}
if(sum ==n)
printf("%d is an armstrong number",n);
else
printf("%d is not an armstrong number",n);
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}