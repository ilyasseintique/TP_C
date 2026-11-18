#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int n;
    int *t;
}typetableau;
typetableau creation(int n){
    typetableau T;
    int * t = malloc(n*sizeof(int));
    if(!t){
        perror("erreur d'allocation !");
        exit;
    }
    T.n = n;
    T.t = t;
    return T;
}
void destruction(typetableau t){
    free(t.t);
}
void SimpleLectureTableau(typetableau T){
    int *t = T.t;
    int n = T.n;
    for(int i = 0 ; i<n ; i++){
        printf("donner la valeur %d: ",i);
        scanf("%d",t+i);
    }
}
void affichage(typetableau T){
    int *t = T.t;
    int n = T.n;
    for(int i = 0 ; i<n ; i++){
        printf("la valeur %d du tableau est %d\n:",i+1,t[i]);
    }
}
typetableau DoubleTableau(typetableau T){
    int * t = T.t;
    int n = T.n;
    typetableau D = creation(n);
    for(int i =0 ; i<n ; i++){
        D.t[i] = t[i]*2;
    }
    return D;
}
int main(){
    int n;
    printf("donner la taille de votre tableau :");
    scanf("%d",&n);
    typetableau table = creation(n);
    SimpleLectureTableau(table);
    typetableau dtable = DoubleTableau(table);
    affichage(dtable);
return 0;
}