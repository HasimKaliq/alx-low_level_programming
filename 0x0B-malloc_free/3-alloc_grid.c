#include <stdlib.h>

int **alloc_grid(int width, int height){
  
    int *memory;
    int outer,inner;
    int const width = width;
     int const hieght = height;
     int arr[width][height];
    
    if((width <= 0) || (height <= 0)) {
        return (NULL);
    }
    
    memory = malloc(sizeof(int));
    if(memory == NULL){
        return (NULL);
    }
    for(outer = 0; outer < width; outer++) {
        for(inner = 0; inner < height; inner++) {
           arr[outer][inner] = 0;
        }
    }
    
return (0);
}
