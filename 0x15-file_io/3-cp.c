#include "holberton.h"
/**
 * main - entry point
 * @argc: number of arguments passed to the function.
 * @argv: two files.
 *
 * Return: integer number.
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD, nBytes_read, nBytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	}
	inputFD = open(argv[1], O_RDONLY);
	nBytes_read = read(inputFD, text, BUF_SIZE);
	if (inputFD == -1 || nBytes_read == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	nBytes_write = write(outputFD, text, nBytes_read);
	if (outputFD == -1 || nBytes_write == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}
	if (close(inputFD) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", inputFD);
	}
	if (close(outputFD) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", outputFD);
	}
	return (0);
}
