#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char* create_array(unsigned int size, char c) {
	char* ptr = (char*)malloc(size * sizeof(char));
	int i;
	i = 0;
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (0);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
       	ptr[i] = '\0';
	return ptr;
}

