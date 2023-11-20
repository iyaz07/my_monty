#include "monty.h"
void execute(void)
{
	struct instruction_s instructions[] = {
    	{"push", push},
    	{NULL, NULL}
	};
	int i;

	data.command = strtok(data.buff, DELIM);
	data.value = strtok(NULL, DELIM);

	for (i = 0; instructions[i].opcode; i++)
	{
		if(strcmp(data.command, instructions[i].opcode) == 0)
		{
			instructions[i].f(&data.stack, data.lineNum);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", data.lineNum, data.command);
}
