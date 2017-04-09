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
	char* arg1 = NULL;
	char* arg2 = NULL;

	printf("-------------------SHELL-------------------\n");
	printf("ls, pwd, mkdir, rm , exit\n");

	while (true)
	{
		printf("-> ");
		gets(str);
		inst = strtok(str, " ");
		arg1 = strtok(NULL, " ");
		arg2 = strtok(NULL, " ");

		if (!strcmp("ls", inst))
			ls(arg1);

		if (!strcmp("pwd", inst))
			pwd();

		if (!strcmp("mkdir", inst))
			mkdir(arg1);

		if (!strcmp("rm", inst))
			rm(arg1, arg2);

		if (!strcmp("exit", inst))
			break;
	}

	return 0;
}
