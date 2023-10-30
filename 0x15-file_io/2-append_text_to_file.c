#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content) {
    int fd, len, rwr;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if (text_content) {
        len = 0;
        while (text_content[len])
            len++;

        rwr = write(fd, text_content, len);

        if (rwr == -1 || rwr != len) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
