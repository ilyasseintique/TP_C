#include <stdio.h>
#include <stdlib.h>
int main(){
    char ** T = malloc(10*sizeof(char*));
    for(int i = 0 ; i<10 ; i++){
        char * S = malloc(sizeof(char)*201);
        scanf("%s",S);
        T[9-i] = S;
    }
    for(int i = 0 ; i<10 ; i++){
        printf("%s\n",T[i]);
    }
    for(int i = 0 ; i<10 ; i++){
        free(T[i]);
    }
    free(T);
return 0;
}