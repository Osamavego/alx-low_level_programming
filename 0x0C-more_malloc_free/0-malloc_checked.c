#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b){
	auto *ptr = (auto*)malloc(auto*b);
	if(b==NULL)
		return 98;
	else
		return *ptr;
}

