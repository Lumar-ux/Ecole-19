#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **strs)
{
    int i = 0;
    int j = 0;

    while (i < 3)
    {
        while (strs[i][j] != '\0')
        {
            j++;
        }
        i++;
        j = 0; // Réinitialiser j pour le prochain tableau de caractères
    }
    return i; // Retourner le nombre total de chaînes dans strs
}

char *ft_strjoin(int size, char **strs)
{
    int total_len = 0;
  int i;
  int j;

  i = 0;
  j = 0;

    for (int i = 0; i < size; i++)
    {
        total_len += ft_strlen(&strs[i]); // Calculer la longueur totale des chaînes
    }

    char *result = (char *)malloc(total_len + 1); // Allouer de la mémoire pour le résultat (+1 pour le caractère de fin de chaîne)

    if (result == NULL)
    {
        return NULL; // Vérifier si l'allocation a réussi
    }

    int index = 0;

    while (i < size)
    {
    i++;
        while (strs[i][j] != '\0')
        {
         j++;
            result[index++] = strs[i][j];
        }
    }

    result[index] = '\0';

    return result;
}

int main()
{
    char *str1[] = {"hello", "world", "!"};

    int sizech = ft_strlen(str1); // Correction : Supprimer l'adresse de &str1

    char *resultat = ft_strjoin(sizech, str1);

    if (resultat != NULL)
    {
        printf("%s\n", resultat);
        free(resultat);
    }
    else
    {
        printf("Erreur d'allocation de mémoire.\n");
    }

    return 0;
}
