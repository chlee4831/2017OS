#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "shell_lib.h"
#define size 10

int main()
{
	char str[size]; //이름 size==10으로 define
	char* inst = NULL;
	char* arg = NULL;

	printf("-------------------SHELL-------------------\n");
	printf("ls, pwd 사용가능\n");

	while (true)
	{
		printf("COMMAND! ");
		gets(str);
		inst = strtok(str, " ");
		arg = strtok(NULL, " ");

		if (!strcmp("ls", str))
		{ //std=="ls"
			ls(arg);
		}
		if (!strcmp("pwd", str))
		{ //std=="ls"
			pwd();
		}
	}
	return 0;
}
