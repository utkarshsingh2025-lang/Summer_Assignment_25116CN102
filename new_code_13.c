#include<stdio.h>
int main()
{
int a,b,sum,num,counter=0;

printf("Enter the term: ");
scanf("%d",&num);

printf("Enter a: ");
scanf("%d",&a);

printf("Enter b: ");
scanf("%d",&b);

printf("Fibonacci Series: %d %d ",a,b);

while(counter < num-2)
{
    sum=a+b;
    printf("%d",sum);
    a=b;
    b=sum;

    counter++;
}
return 0;
} 

