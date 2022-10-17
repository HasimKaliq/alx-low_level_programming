#include <stdlib.h>

int **alloc_grid(int width, int height){
    if((width <= 0) || (height <= 0)) {
       return (NULL);
    }

    unsigned int *memory;
    int outer,inner;
    memory = malloc(sizeof(unsigned int));
    if(memory == NULL) {
        return (NULL);
    }
    memory = unsigned int doubleArr[width][height];

    for(outer = 0; outer < width; outer++) {
        for(inner = 1; inner < height; inner++) {
            doubleArr[outer][inner] = 0;
        }
    }
}
