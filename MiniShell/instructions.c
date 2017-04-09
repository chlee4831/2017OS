#include <stdio.h>
#include <unistd.h>
#include "shell_lib.h"

int ls(char* arg)
{
	int pid, status;
	char* argv[] = { "ls", arg, 0 };
	//execv함수는 인자를 배열로 넘겨받습니다. arg1은 관례적으로 프로그램명을 사용합니다.
	pid = fork();

	switch (pid)
	{
	case -1:
		printf("fork error \n"); //fork 실패시 에러메세지 출력
		exit(1);

	case 0:
		execv("/bin/ls", argv);	//ls프로그램을 실행하고 argv[]를 넘겨줍니다
		printf("exec error \n");
		exit(1);

	default:
		wait(&status);  //child를 wait
	}

	return 0;
}

int pwd()
{
	int pid, status;
	char* argv[] = { "pwd", 0 };
	pid = fork();

	switch (pid)
	{
	case -1:
		printf("fork error \n");
		exit(1);

	case 0:
		execv("/bin/pwd", argv);	//pwd프로그램을 실행합니다
		printf("exec error \n");
		exit(1);

	default:
		wait(&status);  //child를 wait
	}

	return 0;
}

int mkdir(char* arg)
{
	int pid, status;
	char* argv[] = { "ls", arg, 0 };
	//execv함수는 인자를 배열로 넘겨받습니다. arg1은 관례적으로 프로그램명을 사용합니다.
	pid = fork();

	switch (pid)
	{
	case -1:
		printf("fork error \n");
		exit(1);

	case 0:
		execv("/bin/mkdir", argv);	//ls프로그램을 실행하고 argv[]를 넘겨줍니다
		printf("exec error \n");
		exit(1);

	default:
		wait(&status);  //child를 wait
	}

	return 0;
}

int rm(char* arg1, char* arg2)
{
	int pid, status;
	char* argv[] = { "ls", arg1, arg2, 0 };
	//execv함수는 인자를 배열로 넘겨받습니다. arg1은 관례적으로 프로그램명을 사용합니다.
	pid = fork();

	switch (pid)
	{
	case -1:
		printf("fork error \n");
		exit(1);

	case 0:
		execv("/bin/rm", argv);	//ls프로그램을 실행하고 argv[]를 넘겨줍니다
		printf("exec error \n");
		exit(1);

	default:
		wait(&status);  //child를 wait
	}

	return 0;
}
