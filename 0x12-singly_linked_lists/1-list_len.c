size_t list_len(const list_t *h) {

    int counter;
    counter = 0;
    while (h->next != NULL) {
        h = h->next;
        counter++;
        
    }
    return (counter);
}
