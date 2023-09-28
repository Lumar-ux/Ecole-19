#include <unistd.h>
void prt_number(void)
{
char nb = '0';
while (nb <= '9')
{
    write (1, &nb, 1);
    nb++;
}
}
int main  (void)
{
  prt_number();
  return (0);  
}

