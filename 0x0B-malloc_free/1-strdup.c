#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *_strdup(char *str){
	int i=0,r=0;
	
	if(str==NULL)
		return NULL;
	char *ptr=(char*)malloc(sizeof (char) *i+1);
	while(str[i]!='\0')
		i++;
	for(r=0;str[r];i++)
		ptr[r]=str[r];
	return (ptr);
}

