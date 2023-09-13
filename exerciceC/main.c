#include <stdio.h>
#include <stdlib.h>

typedef struct date{
int jour;
int mois;
int annee;
}date;

typedef struct etudiant{
char nom[100];
char prenom[100];
int cne;
date date_de_nai;
}personne;

void lire(personne *etudiant[],int N){
      int i;
 for(i=1;i<N;i++){
   etudiant[i]=(personne *)malloc(sizeof(personne));
    printf("\n enrer le nom d'etudian nemuro %d",&i);
       scanf("%s",etudiant[i].nom);
    printf("\n enrer le nom d'etudian nemuro %d",&i);
       scanf("%s",etudiant[i].prenom);
    printf("\n enrer le CNE d'etudian nemuro %d",&i);
       scanf("%d",etudiant[i].cne);
    printf("\n Date de naissance");
       printf("\n jour");
       scanf("%d",&etudiant[i].jour);
        printf("\n mois");
       scanf("%d",&etudiant[i].mois);
        printf("\n annee");
       scanf("%d",&etudiant[i].annee);
      }
}
int main()
{  int N;
    printf("\n quele le nombre des etudiants");
    scanf("%d", &N);
    personne *etudiant[N];
    printf("enter la liste des etudiants ");
    lire(etudiant,N);

    return 0;
}
