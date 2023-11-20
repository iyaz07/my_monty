#include "monty.h"
int isDigit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if(s[i] < 47 || s[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}

int AddStackTop(stack_t **head, number)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));
	e9a1341546ef994f229e
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		shutdown(head);
	}
	

}
