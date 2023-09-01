#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	if(*argv[]<2){
		printf("Error\n");
	}
	else
		printf("%d*%d\n",atoi(*argv[1]), atoi( *argv[2]));
	return (0);
}
