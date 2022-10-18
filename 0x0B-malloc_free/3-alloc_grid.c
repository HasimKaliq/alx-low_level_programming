#include <stdlib.h>

int **alloc_grid(int width, int height){
    int *memory;
    
    if((width <= 0) || (height <= 0)) {
        return (NULL);
    }
    
    memory = malloc(sizeof(int));
    if(memory == NULL){
        return (NULL);
    }
return (0);
}
