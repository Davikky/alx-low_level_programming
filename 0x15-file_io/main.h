#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);


/* aids for 3-cp.c */
char *create_buffer(char *file);
void close_file(int fd);
int main(int argc, char *argv[]);

#define SF STDERR_FILENO

/* aids end */

#endif
