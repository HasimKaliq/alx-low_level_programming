#include "lists.h"


int print_list(const list_t *h) {

    if(h->str == NULL) {
        printf("[0] (nil)");
    }

    int count = 0;
    while(h->next != NULL) {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        count++;
}
    return(count);
}
