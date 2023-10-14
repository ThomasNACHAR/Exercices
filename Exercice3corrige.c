#include <stdio.h>

int tailleMDP(char MDP[])
{
    int taille = 0;
    int i = 0;
    while (i == 0)
    {
        if (MDP[taille] == '\0')
        {
            i+=1;
        }
        else 
        {
            taille+=1;
        }
    }
    return taille;

}

char saisieMDP(int longueurMinimale)
{

}

int main()
{
    int longueurMinimale = 0;
    printf("Choisir la longueur minimale du mot de passe : \n");
    scanf("%i", &longueurMinimale);
    printf("%i est la longueur minimale du mot de passe \n", longueurMinimale);
    char MDP[255];
    int verifLongueur = 0;
    int verifConditions = 0;
    while (verifLongueur == 0 | verifConditions == 0)
    {
        printf("SAISIR MOT DE PASSE : \n");
        scanf("%s", MDP);
        if (tailleMDP(MDP) < longueurMinimale)
        {
            printf("MDP PAS ASSEZ LONG ! \n");
            continue;
        }
        verifLongueur = 1;
        int maj = 0;
        int min = 0;
        int chiffre = 0;
        int j = 0;
        for (j=0; j<tailleMDP(MDP); j++)
        {
            if (MDP[j] > 64 && MDP[j] < 91)
            {
                maj+=1;
            }
            else if (MDP[j] > 96 && MDP[j] < 123)
            {
                min+=1;
            }
            else if (MDP[j] > 47 && MDP[j] < 58)
            {
                chiffre+=1;
            }
            if (maj != 0 && min != 0 && chiffre != 0)
            {
                verifConditions = 1;
            }
        }
        if (verifConditions == 0)
        {
                printf("CONDITIONS NON RESPECTEES ! \n");
                continue;
        }
        else 
        {
            printf("LE MOT DE PASSE EST BIEN VALIDE ! \n");
        }
    }
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    return 0;
}