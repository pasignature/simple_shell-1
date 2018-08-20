#ifndef _MEMORY_H
#define _MEMORY_H

#include <stdlib.h>

void reset_buffer(char *buffer, ssize_t buf_size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
