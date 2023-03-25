#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct etudiant{
    int matricule;
    struct etudiant* suivant;

}Etudiant;
 typedef struct liste{
     Etudiant *debut;
 }Liste;
 void ajouterEtudiantsAuDebutListe(Liste *estING2);
 Liste* ajoutdebut(Liste* tete, int a);
void ajoutfinEtudiantListe(Liste* estING2);
liste* ajoutefin(Liste* estING2, int a);
void supprimerEtudiantListe(Liste *estING2);
liste* supprimer(Liste* tete, int val);
void afficherEtudiantsListeliste(Liste* estING2);
void afficherEffectifEtudiantsListe(Liste* estING2);


#endif