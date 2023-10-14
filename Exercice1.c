#include <stdio.h>

int somme(int nombre1, int nombre2)
{ 
    int res;
    res = nombre1 + nombre2;
    return res;
}

int main()
{
    int sum;
    int n1, n2;
    printf("Choisir le premier nombre : ");
    scanf("%i", &n1);
    printf("Choisir le second nombre : ");
    scanf("%i", &n2);
    sum = somme(n1, n2);
    printf("La somme de %i + %i est : %i \n", n1, n2, sum);
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    return 0;
}