#include<stdio.h>
int maximum(int a,int b,int c){
    if(a>b)
    return a;
    else
    return b;
    if(a>c)
    return a;
    else
    return c;
    if(b>c)
    return b;
    else
    return c;
}

int main(){
int num1,num2,num3,max;
printf(" Enter three numbers");
scanf("%d%d%d", &num1, &num2, &num3);

max = maximum(num1,num2,num3);

printf("Maximum number = %d",max);
return 0;
}
