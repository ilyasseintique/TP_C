#include <stdio.h>
typedef struct etudiant
{
    char nom[15], prenom[15];
    int CNE;
    float notes[4], moyenne;
} etudiant;
void lecture(etudiant t[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("donner le nom de l'etudiant %d :", i + 1);
        scanf("%14s", t[i].nom);
        printf("donner le prenom de l'etudiant %d :", i + 1);
        scanf("%14s", t[i].prenom);
        printf("donner la CNE de l'etudiant %d :", i + 1);
        scanf("%d", &t[i].CNE);

        t[i].moyenne = 0;
        for (int j = 0; j < 4; j++)
        {
            printf("donner la note %d de l'etudiant %d :", j + 1, i + 1);
            scanf("%f", &t[i].notes[j]);
            t[i].moyenne += t[i].notes[j];
        }
        t[i].moyenne /= 4;
    }
}
void tri(etudiant * t){
    etudiant temp;
    int holder;
    for(int i = 0 ; i<4 ; i++){
        holder = i;
        for(int j = i+1 ; j < 5 ; j++){
            if(t[holder].moyenne < t[j].moyenne){
                holder = j;
            }
        }
        temp = t[i];
        t[i] = t[holder];
        t[holder] = temp;
    }
}
void majorant(etudiant * t){
    tri(t);
    printf("le majorant est:\nNom: %s \nPrenom : %s \nCNE : %d\nMoy = %.2f",t[0].nom,t[0].prenom,t[0].CNE,t[0].moyenne);
}
int main(void)
{
    etudiant T[5];
    lecture(T);
    majorant(T);
    return 0;
}