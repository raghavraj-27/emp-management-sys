#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *readStringFromUser() {
  char buffer[100];
  char *input;

  // printf("Enter a string: ");
  if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    size_t length = strlen(buffer);

    // Remove the newline character if it exists
    if (length > 0 && buffer[length - 1] == '\n') {
      buffer[length - 1] = '\0'; // Replace '\n' with '\0'
    }

    // Allocate memory for the return string and copy the buffer
    input = (char *)malloc(length);
    if (input != NULL) {
      strcpy(input, buffer);
      return input;
    }
  }

  return NULL; // Return NULL in case of an error
}