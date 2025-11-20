/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(){
    int i, j, k;

    // upper half
    for(i = 1; i <= 4; i++){
        for(j = i; j < 4; j++){
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for(i = 3; i >= 1; i--){
        for(j = 3; j >= i+1; j--){
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}