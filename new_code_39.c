#include<stdio.h>
int main(){
int i,j,k,n =5;

printf("Enter n");
scanf("%d", &n);
// Print spaces
for( i=1; i<=n; i++){
    for( j=1; j<=n-i; j++){
        printf(" ");
    }
    // Print increasing Numbers
    for( j=1; j<=i; j++){
        printf("%d", j);
    }
    // Print decreasing numbers
    for( k =i-1; k>= 1; k--){
        printf("%d", k);
    }
    printf("\n");
}
return 0;
}
