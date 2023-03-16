#include <stdio.h>
/**
* main - Prints out a string to stdout.
* Return: 0 (Succes)
*/
int main(void)
{
printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeol(long int));
printf("Size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(float));
return (0);
}
