#include<stdio.h>
int main(){
int arr[100],n,i;
int largest,smallest;
printf("Enter array elements:");
scanf("%d", &n);

printf("Enter array elements:\n");
for(i= 0; i < n; i++){
    scanf("%d", &arr[i]);
}
// Assume first element is largest and smallest
for(i = 1; i < n; i++){
    if(arr[i]> largest)
    largest = arr[i];

    if(arr[i] < smallest)
    smallest = arr[i];
}
printf("Largest element = %d\n", largest);
printf("Smallest element = %d\n", smallest);

return 0;
}