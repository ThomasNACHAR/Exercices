#include <stdio.h>

int main()
{
    int jour1;
    int mois1;
    int annee1;
    int jour2;
    int mois2;
    int annee2;
    printf("Choisir le jour de la première date : \n");
    scanf("%i", &jour1);
    printf("\n");
    printf("Choisir le mois de la première date : \n");
    scanf("%i", &mois1);
    printf("\n");
    printf("Choisir l'annee de la premiere date : \n");
    scanf("%i", &annee1);
    printf("\n");
    printf("Choisir le jour de la seconde date : \n");
    scanf("%i", &jour2);
    printf("\n");
    printf("Choisir le mois de la seconde date : \n");
    scanf("%i", &mois2);
    printf("\n");
    printf("Choisir l'annee de la seconde date : \n");
    scanf("%i", &annee2);
    printf("\n");
    annee1*=365;
    annee2*=365;
    int mois[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    mois1 = mois[mois1-1];
    mois2 = mois[mois2-1];
    int date1 = jour1 + mois1 + annee1;
    int date2 = jour2 + mois2 + annee2;
    int dif = abs(date2-date1);
    printf("Il y a %i jours de difference ! \n", dif);
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    return 0;
}