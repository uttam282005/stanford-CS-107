// TODO: Implement memcpy from scratch

#include <stddef.h>

void memcopy(void *dest, const void *src, size_t elemsz) {
  char *d = (char *)dest;
  const char *s = (const char *)src;

  for (size_t i = 0; i < elemsz; i++) {
    d[i] = s[i]; // Copy each byte from src to dest
  }
}
