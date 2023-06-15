#include <unistd.h>
#include <stdio.h>
/**
* main - Entry point
*
*Description: print string zithout using printf and puts
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, string, 59);
return (1);
}
