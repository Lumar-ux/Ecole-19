#include <unistd.h>
int main(void)
{
  char str[] = "heuHHjjJ,:i:H[";
    int i;

    i = 0;
    while (str[i] != '\0')
    {
    if(str[i] >= 65 && str[i] <= 90)
    {
        str[i] = str[i] + 32;
    }
     else if(str[i] >= 97 && str[i] <= 122)
    {
        str[i] = str[i] - 32;
    }
    write (1, &str[i], 1);
    i++; 
}
return (0);
}
