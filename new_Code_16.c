#include<stdio.h>
#include<math.h>
int main(){
int start,end,num,temp,digit,count,sum;

printf("Enter starting number:");
scanf("%d", &start);

printf("Enter ending number:");
scanf("%d", &end);

printf("Armstrong numbers are:\n");

for(num= start; num<= end;num++){
    temp = num;
    count =0;
    sum = 0;

    //count digits
    while(temp !=0){
        count++;
        temp =temp /10;
    }
    temp =num;
    //Calculate Armstrong sum
    while(temp!=0){
        digit = temp % 10;
        sum=sum+pow(digit,count);
        temp = temp/10;
    }
    if(sum == num)
    printf("%d",num);
}
return 0;
}
