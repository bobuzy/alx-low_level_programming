#ifndef HEADER_FILE
#define HEADER_FILE

#define BUFF_SIZE 1024

#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
