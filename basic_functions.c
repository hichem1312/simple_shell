#include "main.h"
/**
 * _strlen - count the length of a string
 * @s:a string
 * Return: length of the string
 */
int _strlen(char *s)
{
int lengt = 0, i;
for (i = 0; s[i] != '\0'; i++)
lengt++;
return (lengt);
}
/**
 * *_strcpy - copy the string
 * @dest:destination
 * @src:source
 * Return: a copy string
 */
char *_strcpy(char *dest, char *src)
{
int l, i;
l = strlen(src);
for (i = 0; i <= l; i++)
{
dest[i] = src[i];
}
return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest:string
 * @src:string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
int l1 = strlen(dest), l2 = strlen(src), i;
for (i = 0; i <= l2; i++)
{
dest[l1 + i] = src[i];
}
return (dest);
}
/**
 * _strcmp - compares tow strings
 * @s1:string
 * @s2:string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int l1 = strlen(s1), l2 = strlen(s2), n, i, x;
if (l1 > l2)
{
x = l2;
}
else if (l2 > l1)
{
x = l1;
}
for (i = 0; i <= x && (s1[i] != '\0' || s2[i] != '\0'); i++)
{
if (s1[i] > s2[i])
{
n = s1[i] - s2[i];
return (n);
}
else if (s2[i] > s1[i])
{
n = s2[i] - s1[i];
return (n * -1);
}
}
return (0);
}
