#include "test_shell.h"

/**
 * main - my getppid
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t parentpid;

	parentpid = getppid();
	printf("%u\n", parentpid);
	return (0);
}
