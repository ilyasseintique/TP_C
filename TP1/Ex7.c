#include <stdio.h>
void calc(int * T,int n, int * somme, int * produit){
    *somme = 0;
    *produit = 1;
    for(int i = 0; i<n; i++){
        *somme = *somme + T[i];
        *produit = *produit * T[i];
    }
}

int main(){
    int T[5],somme,produit;
    for(int i = 0 ; i<5 ;i++){
        printf("donner le nombre %d :",i+1);
        scanf("%d",T+i);
    }
    calc(T,5,&somme,&produit);
    printf("la somme est %d\n",somme);
    printf("le produit est :%d",produit);
return 0;
}