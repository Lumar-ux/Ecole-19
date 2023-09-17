#include <stdio.h>

int checkDoublons(int tableau[4][4], int l, int c)     
{
    int num = tableau[l][c];
    int i = 0, CnumLigne = 0, CnumColonne = 0;


    while(i < 4) 
    {
        if (tableau[l][i] == num) 
        {
            CnumLigne++;
        }
        if (tableau[i][c] == num) 
        {
            CnumColonne++;
        }
        i++;
    }
    return (CnumLigne == 2 || CnumColonne == 2);
}

int main() 
{
    int l = 0; 
    int c = 0;
    int tableau[4][4] = {{1, 2, 3, 4},
                         {2, 4, 4, 1},
                         {3, 3, 1, 2},
                         {4, 1, 2, 3}};

    while(l < 3 && c < 3)
    {
        if (tableau[i][c] == num)
        
            printf("Le chiffre %d à la position [%d, %d] apparaît deux fois dans la ligne ou la colonne.\n", tableau[l][c], l, c);
        }
        /*else 
        {
            printf("Le chiffre %d à la position [%d, %d] n'apparaît pas deux fois dans la ligne ou la colonne.\n", tableau[l][c], l, c);
        }*/
    }
    return (0);
}

/*
{
         l++;
        }
        l = 0;
        if ( c < 3 && l < 3)
        {
            l++;
        }
        c++;
        if(checkDoublons(tableau, l, c))
        {