#include <stdio.h>
#include "stack.c"

#define MAX_STACK_SIZE 10

int main()
{
	int s[MAX_STACK_SIZE];
	int top = -1;
	char exp[MAX_STACK_SIZE * 10];

	printf("Enter and expression: ");
	fgets(exp, MAX_STACK_SIZE * 10, stdin);
	printf("%s\n", exp);

	for (int i = 0; exp[i] != '\0'; i++)
	{
		char c = exp[i];
		if (c == '{' || c == '(' || c == '[')
			push(s, MAX_STACK_SIZE, &top, (int)c);
		if (c == '}' || c == ')' || c == ']')
			pop(s, MAX_STACK_SIZE, &top);
	}

	if (is_empty(s, MAX_STACK_SIZE, &top))
		printf("Expression is balanced\n");
	else
		printf("Expression is not balanced\n");

	return 0;
}
