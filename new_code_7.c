#include<stdio.h>
int main(){
int prod,digit;
printf("enter the digit");
scanf("%d,digit");
digit=digit%10;
prod=prod*digit;
printf("product of digit is %d",prod);
return 0;
}