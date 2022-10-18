#include <stdlib.h>

int **alloc_grid(int width, int height){
    int *memory;
    int outer, inner;
    int arr[0][0];
    
    if((width <= 0) || (height <= 0)) {
        return (NULL);
    }
    
    memory = malloc(sizeof(int));
    if(memory == NULL){
        return (NULL);
    }
    for(outer = 0; outer < width; outer++) {
        for(inner = 1; inner < height; inner++) {
           memory = arr[outer][inner] = 0;
        }
    }
return (0);
}
