#include <stdio.h>
// il faut ecrire un program a fin d'eleminer un nombre choisit par l'utilisateur
// a l'intérieur du tableau et afficher just les nombres différent a ce nombre
int main(){
    int T[5];
    int i,a,count=0;
    int * p1=T, *p2=T;
    for(i=0;i<5;i++){
        printf("entrer la valeur %d du tableau :",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrer la valeur a eleminer :");
    scanf("%d",&a); 
    for(i=0;i<5;i++){
        if(*p2!=a){
            *p1 = *p2;
            p1++;
        }
        p2++;
    }
    int n = p1-T;
    for(i=0;i<n;i++){
        printf("%d\t",T[i]);
    }
return 0;
}