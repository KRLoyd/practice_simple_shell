#include "test_shell.h"
/**
 * main - my fork, wait, and execve example
 *
 * Description: example of fork, wait, and execve with 5 children to 1 parent
 * Return: Always (0)
 */
int main(void)
{
	pid_t pid, cpid, ppid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;
	unsigned int i;

	for (i = 0; i <= 4; i++)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("fork() Error:\n");
			return (1);
		}
		if (pid == 0) /* Child */
		{
			cpid = getpid();
			ppid = getppid();
			printf("Before execve and cpid: %d ppid: %d\n", cpid, ppid);
			if (execve(argv[0], argv, NULL) == -1)
				perror("execve Error:\n");
			printf("After execve\n");
		}
		else /* Parent */
		{
			ppid = getpid();
			wait(&status);
			printf("child terminated and pid of parent: %d\n", ppid);
		}
	}
	return (0);
}
