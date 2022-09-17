#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int jour;
    int mois;
    int annee;

}date;

typedef struct
{
    char nom[30];
    char prenom[30];
    date dt;

}apprenant;



int main(){
    int size;
    int i,j,n;
    int indexTable = -1;

    printf("Entrez le nombre d'apprenants");
    scanf("%d",&size);

    apprenant *T = malloc(size * sizeof(apprenant));

    void Ajouter(){
        for(i=0; i<size; i++){
            printf("donner le nom : ");
            scanf("%s",&T[i].nom);
            printf("donner le prenom : ");
            scanf("%s",&T[i].prenom);
            printf("donner le jour : ");
            scanf("%d",&T[i].dt.jour);
            printf("donner le mois : ");
            scanf("%d",&T[i].dt.mois);
            printf("donner l'annee : ");
            scanf("%d",&T[i].dt);
            indexTable ++;
        }
    }

    void Afficher(){
        for(i=0; i<size; i++){
            printf("\n\tdonner le nom : %s",T[i].nom);
            printf("\n\tdonner le prenom : %s",T[i].prenom);
            printf("\n\tdonner le jour : %d",T[i].dt.jour);
            printf("\n\tdonner le jour : %d",T[i].dt.mois);
            printf("\n\tdonner le jour : %d",T[i].dt.annee);
            indexTable ++;
        }
    }

    Ajouter();
    Afficher();

    return 0;
}