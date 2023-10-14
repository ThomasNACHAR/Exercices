#include <stdio.h>

void carre()
{
    int n = 0;
    printf("Choisir un nombre entier : \n");
    scanf("%i", &n);
    int i = 1;
    int p = 0;
    while (i!=n+1)
    {
        p = i*i;
        printf("Le carré de %i est : %i \n", i, p);
        i+=1;
    }
}

int main()
{
    carre();
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    return 0;
}