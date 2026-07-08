#include<stdio.h>
int main(){
int arr[10],n,i,key,count = 0;
printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements\n :");
for( i = 0; i<n ; i++){
   scanf("%d", &arr[i]); 
}
printf("Enter the element to find frequency");
scanf("%d", &key);

for( i = 0; i<n ; i++){
    if(arr[i]==key)
    count++;
}
printf("Element repeated %d times", arr[i]);


printf("Frequency of %d = %d",key,count);
return 0;
}