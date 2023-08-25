#include <stdio.h>
#include "main.h"

typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h) {
    size_t count = 0;

    while (h != NULL) {
        if (h->str != NULL) {
            printf("%s\n", h->str);
        } else {
            printf("[0] (nil)\n");
        }
        h = h->next;
        count++;
    }

    return count;
}
