#include <stdio.h>
#include <pthread.h>

int global = 1; //thread에서 접근할 전역변수
void *func(void *arg)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("therad%d: global = %d\n", (int)arg, global);
		global = global*2; //전역변수에 2를 10번 곱하는 함수입니다.
	}
	pthread_exit(0);	//작업을 마치면 thread를 종료합니다.
}

int main()
{
	int i;
	pthread_t id[3];

	for(i = 0; i < 3; i++)
	{
		printf("--------------Create Thread%d, id: %d ----------------\n", i, id[i]);
		if(pthread_create(&id[i], NULL, &func, (void *)i))
		{
			printf("Error: in pthread creation\n");
			exit(10);
		}	//스레드를 생성하고 실패할 경우 에러 출력

	}

	for(i = 0; i < 3; i++)
	{
		if(pthread_join(id[i],NULL))
		{
			printf("Error: in pthread joining\n");
			exit(9);
		}
		printf("------------------Thread%d joined------------------\n",i);
	}	//작업이 끝난 스레드를 join하고 실패할 경우 에러 출력

	printf("End Main\n");	//모든 스레드가 join되면 main프로그램을 종료합니다.
	return 0;
}
