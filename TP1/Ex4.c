#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,M;
    printf("donner la taille de 1er tableau:");
    scanf("%d",&N);
    printf("donner la taille de deuxieme tableau:");
    scanf("%d",&M);
    int * A = malloc(N*sizeof(int));
    int * B = malloc(M*sizeof(int));
    if(!A || !B){
        printf("error");
        return 1;
    }
    for(int i = 0 ; i<N ; i++){
        printf("donner la valeur %d du tableau A :",i+1);
        scanf("%d",A+i);
    } 
    for(int i = 0 ; i<M ; i++){
        printf("donner la valeur %d du tableau B :",i+1);
        scanf("%d",B+i);
    } 
    int * PA = A+N;
    int * PB = B;
    A = realloc(A,sizeof(int)*(N+M));
    if(!A){
        printf("error");
        return 1;
    }
    for(int i = 0; i<M ; i++ ){
        printf("\ntest: %d \n",*(PA+i));
        *(PA+i) = *(PB+i);
        printf("\ntest: %d\n",*(PB+i));
    }
    printf("les valeurs du tableau A sont:\n");
    for(int i = 0 ; i<N+M ; i++){
        printf("%d\t",A[i]);
    } 
    printf("\nles valeurs du tableau B sont:\n");
    for(int i = 0 ; i<M ; i++){
        printf("%d\t",B[i]);
    } 
    free(A);
    free(B);
return 0;
}