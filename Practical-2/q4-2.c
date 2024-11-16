#include<stdio.h>
int main(){
    int size = 5,i,j,k;
    for ( i = 1; i <= size; i++){
        for ( j = size; j > i; j--){
            printf(" ");
        }
        for ( k = 0; k < i * 2 - 1; k++){
            if (k == 0 || k == 2 * i - 2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for ( i = 1; i < size; i++){
        for ( j = 0; j < i; j++){
            printf(" ");
        }
        for ( k = (size - i) * 2 - 1; k >= 1; k--){
            if (k == 1 || k == (size - i) * 2 - 1){
               printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}