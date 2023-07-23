#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
int **wid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
wid = malloc(sizeof(int *) * height);
if (wid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
wid[j] = malloc(sizeof(int) * width);
if (wid[j] == NULL)
{
for (; i >= 0; i--)
free(wid[i]);
free(wid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
wid[i][j] = 0;
}
return (wid);
}
