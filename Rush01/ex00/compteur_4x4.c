#include <stdio.h>
#include <unistd.h>

int checkDoublons(int tableau[4][4], int num)
{
    int i;
    int j;
    int Cnum1lg, Cnum2lg, Cnum1col, Cnum2col;

    i = 0;
    j = 0;

    	while (i < 4 && tableau[j-1][i-1] == '\0' )
    	{
        	Cnum1lg = 0;
        	Cnum2lg = 0;
       		Cnum1col = 0;
        	Cnum2col = 0;

        	while (j < 4)
        	{
            	if (tableau[i][j] == num)
            	{
               	Cnum1lg++;
            	}
            	if (tableau[j][i] == num || tableau[j-1][i-1] == num)
            	{
                Cnum1col++;
            	}
            	j++;
	        	}
        	if (!(Cnum1lg == 2 || Cnum1col == 2))
        	{
          	i++;
          	j = 0;
            //return(0);
        	}
			while(tableau[j-1][i-1] != '\0' || tableau[j][i-1] != '\0' || tableau[j-1][i] != '\0' )
			{
				while (i < 4)
        {
            Cnum1lg = 0;
            Cnum2lg = 0;
            Cnum1col = 0;
            Cnum2col = 0;

            while (j < 4)
            {
      		if(tableau[j-1][i-1] != '\0')
			{
				j = 0;
				i = 0;
			if(tableau[j][i-1] != '\0')
			{
				i =0;
			if(tablea    u[j-1][i] != '\0')
			{
				j = 0;
				if (tableau[i][j] == num && tableau[j-1][i-1] != '\0')
                {
                Cnum1lg++;
                }
                if (tableau[j][i] == num && tableau[j-1][i-1] != '\0')
                {
                Cnum1col++;
                }
				if(
				j = j - 1
                j++;
				}
				} 
			}
		}
		}

    return (1);
	
	}
}
int main()
{
    int tableau[4][4] = {{1, 2, 3, 4},
                         {2, 3, 4, 1},
                         {3, 4, 1, 2},
                         {4, 1, 2, 3}};

    int num = 1;

    if (checkDoublons(tableau, num))
    {
        printf("Les nombres %d et %d apparaissent deux fois.\n", num);
    }
    /* else
    {
        printf("%d", num1, num2);
    }*/

    return 0;
}
