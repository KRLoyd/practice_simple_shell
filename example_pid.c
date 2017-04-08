#include "test_shell.h"

/**
 * main - Hbtn's example PID
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
