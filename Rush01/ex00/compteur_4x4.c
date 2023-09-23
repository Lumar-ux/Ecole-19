#include <stdio.h>

#include <unistd.h>

int checkDoublons(int tableau[4][4], int num1, int num2)
{
    int i; 
    int j;
    int Cnum1lg, Cnum2Lg, Cnum1col, Cnum2col;

    i = 0;
    j = 0;

    while (i < 4)
    {
        Cnum1lg = 0;
        Cnum2Lg = 0;
        Cnum1col = 0;
        Cnum2col = 0;

        while (j < 4)
        {
            if (tableau[i][j] == num1) 
            {
                Cnum1lg++;
            }
            if (tableau[i][j] == num2) 
            {
                Cnum1lg++;
            }
            if (tableau[j][i] == num1) 
            {
                Cnum1col++;
            }
            if (tableau[j][i] == num2) 
            {
                Cnum2col++;
            }
            j++;
        }

        if (!(Cnum1lg == 2 || Cnum2Lg == 2 || Cnum1col == 2 || Cnum2col == 2))
        {
            return (0);
        }
        i++;
    }

    return (1);
}

int main() 
{
    int tableau[4][4] = {{1, 2, 3, 4},
                         {2, 3, 4, 1},
                         {3, 4, 1, 2},
                         {4, 1, 2, 3}};

    int num1 = 1;
    int num2 = 2;

    if (checkDoublons(tableau, num1, num2)) 
    {
        printf("Les nombres %d et %d apparaissent deux fois.\n", num1, num2);
    } 
    else 
    {
        printf("error.\n", num1, num2);
    }

    return 0;
}
