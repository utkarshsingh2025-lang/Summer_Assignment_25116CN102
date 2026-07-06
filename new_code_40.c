#include<stdio.h>
int main(){
    int i,j,k,n =5;

    printf(" Enter n");
    scanf("%d", &n);
// Print Spaces
    for( i=1; i<=n; i++){
        for( j=1; j<=n-i; j++){
            printf(" ");
        }
// Print increasing characters
for(j =1; j<=i; j++){
    printf("%c",j+64);
}
// Print decreasing characters
for( k=i-1; k>= 1; k--){
    printf("%c", k+64);
}
printf("\n");
        }
    return 0;
}