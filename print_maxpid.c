#include "test_shell.h"

/**
 * main - print maximum value a process ID can be
 *
 * Return: 0 (SUCCESS), exit value is -1 upon failure
 */
int main(void)
{

	int max_pid_fd;
	ssize_t r_result, w_result, c_result;
	char *buffer;

	max_pid_fd = open(../proc/sys/kernel/pid_max, O_RDONLY);
	if (max_pid_fd < 0)
		error_handle(98, 0);
	printf("opened the file! fd: %d\n", max_pid_fd);
	buffer = malloc(BUFSIZE);
	if (buffer == NULL)
	{
		error_handle(99, 0);
	}
	printf("malloc'd space for buffer!\n");
	r_result = read(max_pid_fd, buffer, BUFSIZE);
	if (r_result < 0)
		error_handle(100, max_pid_fd);
	printf("read file fd %d\n", max_pid_fd);
	w_result = write(STDOUT_FILENO, buffer, r_result);
	c_result = close(max_pid_fd);
	if (w_result < 0)
		error_handle(101, max_pid_fd);
	if (c_result < 0)
		error_handle(102, max_pid_fd);
	return (0);
}


/**
 * error_handle - function to print error messages and return exit statuses
 *
 * Return: void
 */

void error_handle(int num, int fd)
{
	switch(num)
	{
	case 98:
		dprintf(STDOUT_FILENO, "Could not open file\n");
		exit(-1);
	case 99:
		dprintf(STDOUT_FILENO, "Could not malloc space\n");
		exit(-1);
	case 100:
		dprintf(STDOUT_FILENO, "Could not read fd %d\n", fd);
		close(fd);
		exit(-1);
	case 101:
		dprintf(STDOUT_FILENO, "Could not write from fd %d\n", fd);
		exit(-1);
	case 102:
		dprintf(STDOUT_FILENO, "Could not close fd %d\n", fd);
		exit(-1);
	}
}
