#ifndef HEADER_FILE
#define HEADER_FILE

#define BUFF_SIZE 1024

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);

#endif
