#include "read_line.h"
#include <stdio.h>
#include <stdlib.h>

char *read_line(FILE *file) {

  char *buff = (char *)malloc(INITIALBUFFSIZE);

  if (buff == NULL) {
    puts("Buffer allocation failed.");
  }

  size_t buff_start = 0;
  size_t bytes_to_read = 32;
  size_t buff_size = INITIALBUFFSIZE;

  while (fgets(buff + buff_start, bytes_to_read, file) != NULL) {

    for (size_t i = 0; i < buff_size; i++) {
      if (buff[i] == '\n') {
        return buff;
      }
    }

    buff = realloc(buff, 2 * buff_size);

    if (buff == NULL) {
      puts("Buffer reallocation failed.");
      break;
    }

    buff_start = buff_size - 1;
    bytes_to_read = buff_size + 1;
    buff_size *= 2;
  }

  if (feof(file))
    puts("\nEnd of the file.\n");

  return buff;
}
