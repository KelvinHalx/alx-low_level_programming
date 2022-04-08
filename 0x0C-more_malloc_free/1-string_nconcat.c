#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1, @s2 - pointer char
 * @n - unsigned int
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *str;
  size_t len1 = 0;
  size_t len2 = 0;
  size_t a = 0;
  size_t b = 0;

  while (s1 &&s1[len1])
    len1++;
  if (s2 && s2[len2])
    len2++;
  if (n < len2)
    z = malloc(sizeof(char) * (len1 + n + 1));
  else
    z = malloc(sizeof(char) * (len1 + len2 + 1));
  if (z == NUll)
    return (NULL);
  while (a < len1)
    {
      z[a] = s1[a];
      a++;
    }
  while (n < len2 && a < (len1 + n))
    z[a++] = s2[b++];
  while (n >= len2 && a < (len1 + len2))
    z[a++] = s2[b++];
  z[a] = '\0';
  return (z);
}
