#include<stdio.h>
int main(){
int a,b,lcm;
printf("enter two numbers:");
scanf("%d%d",&a,&b);

for(int i=2;i<=a && i<=b;i++)
{
    if(a%i==0 && b%i==0)
    {
        lcm=i;
    }
}
printf("LCM=%d",lcm);
return 0;
}