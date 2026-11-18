#include <stdio.h>
typedef struct nombreRationnel
{
    int num;
    int denom;
    float ratio;
}nombreRationnel;
void saisie(nombreRationnel * nbr){
    printf("donner le numérateur :");
    scanf("%d",&(nbr->num));
    printf("donner le dénominateur :");
    scanf("%d",&(nbr->denom));
}
void affichage(nombreRationnel nbr){
    printf("le numérateur est :%d\n", nbr.num);
    printf("le dénominateur est :%d\n", nbr.denom);
}
void addition(nombreRationnel nbr1 , nombreRationnel nbr2){
    printf("%d/%d + %d/%d = %d/%d = %f\n",nbr1.num,nbr1.denom,nbr2.num,nbr2.denom,nbr1.num*nbr2.denom+nbr2.num*nbr1.denom,nbr1.denom*nbr2.denom,(float)(nbr1.num*nbr2.denom+nbr2.num*nbr1.denom)/(nbr1.denom*nbr2.denom));
}
int main()
{
    nombreRationnel n1,n2;
    saisie(&n1);
    saisie(&n2);
    affichage(n1);
    affichage(n2);
    addition(n1,n2);
    return 0;
}