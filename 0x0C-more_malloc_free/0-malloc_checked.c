#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer
 */
void *malloc_checked (unsigned int b)
{
  int *a;
  a = (int *) malloc (b);
  if (a == 0)
    {
      exit(98);
    }
  return (a);
}
