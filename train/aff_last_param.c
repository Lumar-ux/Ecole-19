#include <unistd.h>
int main (int argc, char *argv[])
{
int l;
int j;

l = argc - 1;
j = 0;

while(argv[l][j] != '\0' && !argv[0][j])
{
    write (1, &argv[l][j], 1);
j++;
}
toucwrite(1, "\n", 1);
return (0);
}