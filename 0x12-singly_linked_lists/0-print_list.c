#include "lists.h"


size_t print_list(const list_t *h) {
    int count;
    if(h->str == NULL) {
        printf("[0] (nil)");
    }

    count = 0;
    while(h != NULL) {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        count++;
}
    return(count);
}
