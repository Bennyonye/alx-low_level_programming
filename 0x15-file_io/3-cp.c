#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed. On failure, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t rrd, rwr;
    char *buff;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);

    if (fd == -1)
        return (0);

    buff = malloc(sizeof(char) * letters);
    if (!buf)
        return (0);

    rrd = read(fd, buff, letters);
    rwr = write(STDOUT_FILENO, buff, rrd);

    close(fd);

    free(buff);

    return (rwr);
}
