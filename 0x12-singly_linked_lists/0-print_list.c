#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;



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
