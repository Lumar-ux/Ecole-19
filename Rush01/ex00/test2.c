#include <stdio.h>
int checkDoublons2(int tableau[4][4], int l, int c)
{
	int i;
	int j;
	int num = tableau[l][c]; 
	int Cnum1lg = 0; 
	int Cnum1col = 0;

	i = 0;
	j = 0;
	while(tableau[j-1][i-1] != '\0' || tableau[j][i-1] != '\0' || tableau[j-1][i] != '\0' )
	{
		while (i < 4)
		{
		Cnum1lg = 0;
		Cnum1col = 0;
			while (j < 4)
			{
				if(tableau[j-1][i-1] != '\0')		
				{
				j = 0;
				i = 0;
					if(tableau[j][i-1] != '\0')
					{
						i = 0;
						if(tableau[j-1][i] != '\0')
						{
						j = 0;
							if (tableau[l][j] == num && tableau[l-1][c-1] != '\0')
							{	
								Cnum1lg++;
							}
								if (tableau[j][c] == num && tableau[j-1][c-1] != '\0')
								{	
									j--;
									Cnum1col++;
								}
									else
									{
										c = c - 1;	
									j = j - 1;
									j++;
									}
						}
					}
				}
			}		
		//return (1);
		}
	}	
return(0);
}
int checkDoublons(int tableau[4][4], int l, int c) 	
{
    int num = tableau[l][c];
    int i = 0, Cnumligne = 0, CnumColonne = 0;


    while(i < 4) 
	{
        if (tableau[l][i] == num) 
		{
            Cnumligne++;
        }
		//i = 0;
		if (tableau[i][c] == num) 
		{
            CnumColonne++;
        }
        i++;
		//i = 0;
		//return(Cnumligne == 2 || CnumColonne == 2) 
		/*{
            return 1;
		}*/
		/*else
		{
		checkDoublons2(tableau,  l, c);
		}*/
    }

   
	return (Cnumligne == 2 || CnumColonne == 2);
}

int main() 
{
    int tableau[4][4] = {{1, 3, 3, 4},
                         {2, 3, 4, 1},
                         {3, 2, 4, 2},
                         {4, 1, 2, 3}};

    int l = 1; 
    int c = 2; 

    if (checkDoublons(tableau, l, c)) {
        printf("Le chiffre %d à la position [%d, %d] apparaît deux fois dans la ligne ou la colonne.\n", tableau[l][c], l, c);
    } else {
        printf("Le chiffre %d à la position [%d, %d] n'apparaît pas deux fois dans la ligne ou la colonne.\n", tableau[l][c], l, c);
    }

    return 0;
}