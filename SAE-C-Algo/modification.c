#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "en_tete.h"


void modif_nom(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].nom,modif);
}

void modif_mail(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].nom,modif);
}

void modif_prenom(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].prenom,modif);
}

void modif_ville(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].ville,modif);
}

void modif_codePostal(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].codePostal,modif);
}

void modif_tel(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].tel,modif);
}

void modif_emploi(int taille, CLIENT tab[taille],int indice[taille], char modif[30], int choix)
{
    strcpy(tab[indice[choix-1]].emploi,modif);
}

void modification(int taille, CLIENT tab[taille],int indice[taille])
{
    int c1,c2;
    char modif[30];
    printf("saisissez le num�ro du client que vous voulez modifier: ");
    scanf("%d",&c1);
    printf("%d: %s,%s,%s,%s,%s,%s,%s\n\n",c1,tab[indice[c1-1]].prenom,tab[indice[c1-1]].nom,tab[indice[c1-1]].ville,tab[indice[c1-1]].codePostal,tab[indice[c1-1]].tel,tab[indice[c1-1]].mail,tab[indice[c1-1]].emploi);
    printf("vous voulez modifier: \n");
    printf("prenom................... 1\n");
    printf("nom ..................... 2\n");
    printf("ville ................... 3\n");
    printf("code postal ............. 4\n");
    printf("numero de telephone...... 5\n");
    printf("mail .................... 6\n");
    printf("emploi .................. 7\n");
    printf("Quitter ................. 8\n");
    printf("Votre choix (saisissez le numero correspondant): ");
    scanf("%d", &c2);
    getchar();
    printf("saisissez la modification: ");
    scanf("%s",modif);
    switch(c2)
    {
        case 1: modif_prenom(taille,tab,indice,modif,c1);
        break;
        case 2: modif_nom(taille,tab,indice,modif,c1);
        break;
        case 3: modif_ville(taille,tab,indice,modif,c1);
        break;
        case 4: modif_codePostal(taille,tab,indice,modif,c1);
        break;
        case 5: modif_tel(taille,tab,indice,modif,c1);
        break;
        case 6: modif_mail(taille,tab,indice,modif,c1);
        break;
        case 7: modif_emploi(taille,tab,indice,modif,c1);
        break;
        case 8: break;
        default: printf("erreur de saisie \n");
    }
}

int ajouter(int taille, CLIENT tab[taille], int indice[taille])
{
    taille++;
    tab=realloc(tab,taille*sizeof(CLIENT));
    printf("j'y suis\n");
    indice=realloc(indice,taille*sizeof(int));
    indice[taille-1]=taille-1;
    printf("saisissez un nom: ");
    fgets(tab[indice[taille]].nom,20,stdin);
    printf("saisissez un prenom: ");
    fgets(tab[indice[taille]].prenom,20,stdin);
    printf("saisissez une ville (en majuscule): ");
    fgets(tab[indice[taille]].ville,20,stdin);
    printf("saisissez un code postal: ");
    fgets(tab[indice[taille]].codePostal,20,stdin);
    printf("saisissez un numero de telephone sous forme(XX.XX.XX.XX.XX): ");
    fgets(tab[indice[taille]].tel,20,stdin);
    printf("saisissez une adresse mail: ");
    fgets(tab[indice[taille]].mail,20,stdin);
    printf("saisissez un emploi/metier: ");
    fgets(tab[indice[taille]].emploi,20,stdin);
    return taille;
}


int supprimer(int taille, CLIENT tab[taille],int indice[taille])
{
    int choix,i;
    printf("quel client voulez-vous supprimer ? (saisissez son num�ro)");
    scanf("%d",&choix);
    for (i = choix - 1; i < taille - 1; i++)
         tab[i] = tab[i+1];
    taille--;
    printf("client supprime\n");
    return taille;
}

//responsable de la fonction: Valentin SEGALLA
