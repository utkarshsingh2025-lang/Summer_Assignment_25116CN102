#include<stdio.h>
int main(){
int arr[100],n,i;

printf(" Enter number of elements: ");
scanf("%d", &n);
// Input array elements
for( int i = 0; i<n ; i++){
    printf("Enter array elements:\n");
    scanf("%d", &arr[i]);
}
// Display array elements
printf("Array elements are:\n");
for(i = 0; i < n; i++){
    printf("%d", arr[i]);
}
return 0;
}
