#include <stdio.h>

typedef struct produit{
    int ref;
    float prix;
    int quantite;
}produit;
void saisir(produit * p){
    printf("donner le ref de produit :");
    scanf("%d",p->ref);
    printf("donner le prix de produit :");
    scanf("%d",p->prix);
    printf("donner la quantite de produit :");
    scanf("%d",p->quantite);
}
void affichage(produit p){
    printf("le ref est :%d",p.ref);
    printf("le prix est :%f",p.prix);
    printf("la quantité est :%d",p.quantite);
}
void commande(produit p){
    int qnt;
    printf("enter la quantite du produit a commandé:");
    scanf("%d",&qnt);
    if (qnt>p.quantite){
        printf("")
    }
}
int main(){
    
return 0;
}