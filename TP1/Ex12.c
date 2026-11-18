#include <stdio.h>
struct date
{
    int jour;
    char mois[10];
    int annee;
};
struct employe
{
    char nom[15], prenom[15];
    struct date anniversire, date_embauche;
};
void insertion(struct employe *t)
{
    for (int i = 0; i < 4; i++)
    {
        printf("donner le nom de l'employee N°%d :", i + 1);
        scanf("%14s", t[i].nom);
        printf("donner le prenom de l'employee N°%d :", i + 1);
        scanf("%14s", t[i].prenom);
        printf("donner le jours de naissance de l'employee N°%d :", i + 1);
        scanf("%d", &t[i].anniversire.jour);
        printf("donner le mois de naissance de l'employee N°%d :", i + 1);
        scanf("%9s", t[i].anniversire.mois);
        printf("donner l'annee de naissance de l'employee N°%d :", i + 1);
        scanf("%d", &t[i].anniversire.annee);
        printf("donner le jours d'embauche de l'employee N°%d :", i + 1);
        scanf("%d", &t[i].date_embauche.jour);
        printf("donner le mois d'embauche de l'employee N°%d :", i + 1);
        scanf("%9s", t[i].date_embauche.mois);
        printf("donner l'annee d'embauche de l'employee N°%d :", i + 1);
        scanf("%d", &t[i].date_embauche.annee);
    }
}
void affichage(struct employe *t)
{
    for (int i = 0; i < 4; i++)
    {
        printf("Nom : %s\n", t[i].nom);
        printf("Prenom : %s\n", t[i].prenom);
        printf("Date de naissance : %d  %s  %d\n", t[i].anniversire.jour, t[i].anniversire.mois, t[i].anniversire.annee);
        printf("Date d'embauche : %d  %s  %d\n", t[i].date_embauche.jour, t[i].date_embauche.mois, t[i].date_embauche.annee);
    }
}
int main()
{
    struct employe t[4];
    insertion(t);
    affichage(t);
    return 0;
}