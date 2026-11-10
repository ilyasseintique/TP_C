#include <stdio.h>
#include <string.h>
typedef struct pann
{
    float longueur;
    float largeur;
    float epess;
    char type[10];
} pann;
void saisir(pann *p)
{
    int code;
    printf("donner la longueur de votre panneau :");
    scanf("%f", &p->longueur);
    printf("donner la largeur de votre panneau :");
    scanf("%f", &p->largeur);
    printf("donner l'epaisseur de votre panneau :");
    scanf("%f", &p->epess);
here:
    printf("donner le type de votre panneau :\n0 : Pin\n1 : chene\n2 : hetre\n");
    scanf("%d", &code);
    switch (code)
    {
    case 0:
        strcpy(p->type, "Pin");
        break;
    case 1:
        strcpy(p->type, "chene");
        break;
    case 2:
        strcpy(p->type, "hetre");
        break;
    default:
    {
        printf("la valeur est incorrect ");
        goto here;
    }
    }
}
void afficher(pann p)
{
    printf("la longueur de votre panneau est :%f\n", p.longueur);
    printf("la largeur de votre panneau est :%f\n", p.largeur);
    printf("l'epaisseur de votre panneau est :%f\n", p.epess);
    printf("le type de votre panneau est :%s\n", p.type);
}
int volume(pann p)
{
    return p.largeur * p.longueur * p.epess;
}
int main()
{
    pann p;
    saisir(&p);
    afficher(p);
    printf("le volume du panneau est :%f m^3", volume(p));
    return 0;
}