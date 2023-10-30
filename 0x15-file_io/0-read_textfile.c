#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters (characters) to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters) 
{
    int fd, bytes_rrd, bytes_rwr;
    char *buff;
    
    if (filename == NULL)
        return (0);
    
    fd = open(filename, O_RDONLY);
    
    if (fd == -1)
        return (0);
    
    buff = malloc(sizeof(char) * letters);
    
    if (buff == NULL) {
        close(fd);
        return (0);
    }
    
    bytes_rrd = read(fd, buff, letters);
    
    if (bytes_rrd == -1) {
        close(fd);
        free(buff);
        return (0);
    }
    
    bytes_rwr = write(STDOUT_FILENO, buff, bytes_rrd);
    
    close(fd);
    free(buff);
    
    if (bytes_rwr < 0 || bytes_rwr != bytes_rrd)
        return (0);

    return (bytes_rwr);
}
