#include <string.h>
#include <stdio.h>

int main()
{
char src[] = "Hello2";
char *dest = strdup(src); 
printf("%s", dest);
return(0);
}
