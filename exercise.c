#include <stdio.h>
#include <stdlib.h>

int main(){
    int usernumber;
    scanf("%i", &usernumber);
    int i;
    int squared;
    for (i = usernumber; i>0; i--){
        squared = i*i;
        printf("number squared is: %i\n", squared);
    }
    return 0;
}