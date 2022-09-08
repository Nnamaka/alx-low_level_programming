#include <stdio.h>
#include <unistd.h>
/**
 * main - prints text without put or printf
 * Return: returns 0 on success
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
