#include <stdio.h>

int main()
{
    int limite = 0;
    printf("Choisir une limite : \n");
    scanf("%i", &limite);
    int i = 4;
    int somme = 5;
    while (i!= limite+1)
    {
        int count = 0;
        int j = i-1;
        while (j!=1)
        {
            if (i%j == 0)
            {
                count+=1;
                break;
            }
        j--;
        }
        if (count==0)
        {
            somme+=i;
        }
        i++;
    }
    printf("La somme des nombres premiers jusqu'à %i est %i \n", limite, somme);
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
}