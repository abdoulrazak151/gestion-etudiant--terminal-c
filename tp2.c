#include <stdio.h>
#include "tp2.h"
*Liste initialiser(){
    return NULL;
}

 Liste* ajoutdebut(Liste* tete, int a){
     Etudiant* tempo;
     tempo=(Etudiant*)malloc(sizeof(Etudiant));
     if (tempo!=NULL){
         tempo->matricule=a;
         tempo->suivant=tete->debut;
         tete->debut=tempo;
     }
     return tete;
 }
// liste d'ajout de +sieur etudiants
 void ajouterEtudiantsAuDebutListe(Liste *estING2){
     int i, nbre,a;
    //  Liste* tempo;
     printf("combien d'etudiant souhaiterez-vous ajouter ? :");
     scanf("%d",&nbre);
     for(i=0;i<nbre;i++){
         printf("donner le matricule de l'eudiant a ajouter au debut de la liste ! ");
         scanf("%d",&a);
         estING2=ajoutdebut(estING2, a);

     }


 }

liste* ajoutefin(Liste* estING2, int a){
    Etudiant* tempo;
    tempo=(Etudiant*)malloc(sizeof(Etudiant));
    if(estING2->debut==NULL){
        tempo->matricule=a;
        tempo->suivant=NULL;
        estING2->debut=tempo;
    }
    if(tempo!=NULL){
        tempo->matricule=a;
        tempo->suivant=NULL;
        while (estING2->debut!=NULL){
            estING2->debut=estING2->debut->suivant;
        }
        if(estING2->debut==NULL){
            estING2->debut->suivant=tempo;
        }
    }
    return estING2;
}

void ajoutfinEtudiantListe(Liste* estING2){
    int i, nbre,a;
    //  Liste* tempo;
     printf("combien d'etudiant souhaiterez-vous ajouter ? :");
     scanf("%d",&nbre);
     for(i=0;i<nbre;i++){
         printf("donner le matricule de l'eudiant a ajouter a la fin de la liste ! ");
         scanf("%d",&a);
         estING2=ajoutefin(estING2, a);

     }
}

liste* supprimer(Liste* tete, int val){
    Etudiant* actuelle;
    Etudiant* precedent;
    actuelle=estING2->debut;
    precedent=estING2->debut;
    if(actuelle=NULL)
        return estING2;
    if(estING2->debut->matricule==val){
        precedent=estING2->debut;
        estING2->debut=estING2->debut->suivant;
        free(precedent);
        return estING2;
    }
    while(actuelle!=NULL && actuelle->matricule!=val){
        precedent=actuelle;
        actuelle=actuelle->suivant;
    }
    if(estING2->debut!=NULL){
        precedent->suivant=actuelle->suivant;
        free(actuelle);
    }
    return estING2;

}
void supprimerEtudiantListe(Liste *estING2){
    int i, nbre,a;
    //  Liste* tempo;
     printf("combien d'etudiant souhaiterez-vous supprimer ? :");
     scanf("%d",&nbre);
     for(i=0;i<nbre;i++){
         printf("donner le matricule de l'eudiant a supprimer ! ");
         scanf("%d",&a);
         estING2=supprimer(estING2, a);
     }
}
void afficherEtudiantsListeliste(Liste* estING2){
    Etudiant* tempo;
    tempo=estING2->debut
    if(estING2==NULL)
        printf("cette liste n'existe pas");
    if(tempo==NULL)
        printf("\n\t\t\t-----liste vide------");
    while(tempo!=NULL){
        printf("%d | ",tempo->matricule);
        tempo=tempo->suivant;
    }
    
}
void afficherEffectifEtudiantsListe(Liste* estING2){
    Etudiant* tempo;
    int i=0;
    tempo=estING2->debut
    if(estING2==NULL)
        printf("cette liste n'existe pas");
    if(tempo==NULL)
        printf("\n\t\t\t-----liste vide------")
    while(tempo!=NULL){
        i++;

    }
    printf("\nl'effectif de la classe est : %d", i);
}
void menu(Liste* estING2){
    int a;
    char c;
    printf("            |------------------------------------------------------------------------------------|\n");
    printf("            |                       STRUCTURE DE DONNEES COMPLEXE ET COMPLEXITE                  |\n");
    printf("            |                                    EXERCICE TD N2                                  |\n");
    printf("            |                       Realise par : Mahamadou Moussa Abdoul Razak                  |\n");
    printf("            |                    INGENIEUR 2 EST NIGER Annee Academique: 2020-2021               |\n");
    printf("            .------------------------------------------------------------------------------------.\n");
    printf("            |           1. ajouter un etudiant  au debut de la liste                             |\n");
    printf("            |           2. ajouter un etudiant a la fin de liste                                 |\n");
    printf("            |           3. supprimer un etudiant grace a son matricule                           |\n");
    printf("            |           4. afficher la liste des etudiants                                       |\n");
    printf("            |           5. afficher l'effectif des eudiants                                      |\n");
    printf("            |           6. quitter                                                               |\n");
    printf("            |------------------------------------------------------------------------------------|\n");
    printf("            |------------------------------------------------------------------------------------|\n");
}

 


 