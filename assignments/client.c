#include "read_line.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *tmpf = tmpfile();
  fputs("Alan Turing\n", tmpf);
  fputs("John von Neumann\n", tmpf);
  fputs("Alonzo Church\n", tmpf);

  rewind(tmpf);

  FILE *fp = fopen("example.txt", "r");

  if (NULL == fp) {
    printf("file can't be opened \n");
    return -1;
  }

  while (!feof(fp)) {
    char *line = read_line(fp);
    printf("%s\n", line);
    free(line);
  }
}
