
 
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    for(;;){
        printf("\nCap phat %d bytes!", 1000000 * sizeof (int));
        int *ptr = (int*) malloc (1000000 * sizeof (int));
    }
}
 
