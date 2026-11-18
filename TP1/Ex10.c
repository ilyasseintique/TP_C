#include <stdio.h>
#include <stdlib.h>
typedef struct produit
{
    int ref;
    float prix;
    int quantite;
} produit;
void saisir(produit *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("donner le ref de produit :");
        scanf("%d", p[i].ref);
        printf("donner le prix de produit :");
        scanf("%f", p[i].prix);
        printf("donner la quantite de produit :");
        scanf("%d", p[i].quantite);
    }
}
void affichage(produit *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("le ref est :%d\n", p[i].ref);
        printf("le prix est :%f\n", p[i].prix);
        printf("la quantité est :%d\n", p[i].quantite);
    }
}
void commande(produit *p, int n)
{
    int ref;
    int qnt;
    produit choisit;
    printf("enter le ref du produit a commandé: ");
    scanf("%d", &ref);
    for (int i = 0; i < n; i++)
    {
        if (p[i].ref == ref)
        {
            choisit = p[i];
            break;
        }
    }
    printf("enter la quantite du produit a commandé: ");
    scanf("%d", &qnt);
    if (qnt > choisit.quantite)
    {
        printf("la quantité est insuffisante\n");
    }
    printf("la commande :`\nref prod : %d\nqnt : %d\nprix totale: %f", ref, qnt, qnt * choisit.prix);
}
int main()
{
    int n, c=1;
    printf("Donner le nombre des produits :");
    scanf("%d", &n);
    produit *p = malloc(n * sizeof(produit));
    while (c != 0)
    {
        printf("Menu\nPour saisir les produits entrer 1\nPour afficher les produits entrer 2\nPour faire une commande entrer 3\nPour sortir entrer 0\n");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            break;
        case 1:
            saisir(p, n);
            break;
        case 2:
            affichage(p, n);
            break;
        case 3:
            commande(p, n);
            break;
        default:
            printf("invalide input\n");
            break;
        }
    }
    return 0;
}