#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    char phrase[255];
    int voyelles = 0;
    int i = 0;
 
    printf("Ecrivez du texte : \n");
    fgets(phrase, 255, stdin);
    int a = 0;
    i = 0;
    while (a == 0)
    {
        if (phrase[i] == '\0')
        {
            a++;
        }
        else if (phrase[i] == 'a')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'e')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'i')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'o')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'u')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'y')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'A')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'E')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'I')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'O')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'U')
        {
            voyelles+=1;
        }
        else if (phrase[i] == 'Y')
        {
            voyelles+=1;
        }
        i++;
    }
    
    
    printf("Le nombre de voyelles est de %i \n", voyelles);
    printf("Appuyer sur ENTREE pour quitter le programme ! \n");
    getchar();
    return 0;
}