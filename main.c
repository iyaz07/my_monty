#include "monty.h"

mont data = {NULL, 0, NULL, NULL, NULL};

int main(int argc, char **argv)
{
	FILE *file;
	char *lineptr;
	size_t n;
	ssize_t read;

	lineptr = NULL;
	n = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if(!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	 
	while ((read = getline(&lineptr, &n, file)) != -1)
	{
		data.lineNum++;
		data.buff = lineptr;
		execute();
	}
	fclose(file);
	free(lineptr);
}
