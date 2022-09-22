
#include "main.h"

char *_strcat(char *dest, char *src)
{

	int indexSrc = 0, dest_len = 0;

	while (dest[indexSrc++])
		dest_len++;

	for (indexSrc = 0; src[indexSrc]; indexSrc++)
		dest[dest_len++] = src[indexSrc];
	dest[dest_len++] = '\0';
	return (dest);
}
