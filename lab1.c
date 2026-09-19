#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *input = NULL;
size_t capacity = 0;
int main(void){
  char *chunks;
  printf("Enter some text will yah: ");
  fflush(stdout);
  ssize_t num_char = getline(&input, &capacity, stdin);
  if (num_char == -1) {
    printf("getline failed\n");
    free(input);
    return 0;
  }

  input[strcspn(input, "\n")] = '\0';
  printf("Tokens:\n");
  char *newptr= NULL;
  chunks = strtok_r(input, " ", &newptr);


  while (chunks != NULL) {
    printf("%s\n", chunks);
    chunks = strtok_r(NULL, " ", &newptr);
  }
  free(input);
  return 0;
}
