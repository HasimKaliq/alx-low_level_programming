#include "lists.h"

size_t list_len(const list_t *h) {

    int counter;
    counter = 0;
    while (h != NULL) {
        h = h->next;
        counter++;
        
    }
    return (counter);
}
