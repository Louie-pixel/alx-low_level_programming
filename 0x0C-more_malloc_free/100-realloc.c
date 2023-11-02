#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;

    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        return malloc(new_size);
    }

    if (new_size == old_size) {
        return ptr;
    }

    new_ptr = malloc(new_size);

    if (new_ptr == NULL) {
        return NULL;
    }

    // Copy the contents from the old memory block to the new one
    if (new_size > old_size) {
        new_size = old_size;
    }

    for (unsigned int i = 0; i < new_size; i++) {
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    }

    free(ptr);  // Free the old memory block

    return new_ptr;
}

