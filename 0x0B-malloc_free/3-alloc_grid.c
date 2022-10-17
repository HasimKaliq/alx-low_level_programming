int **alloc_grid(int width, int height){
    if((width <= 0) || (height <= 0)) {
        printf("One of them is <= 0");
    }

    int *memory;
    int outer,inner;
    memory = malloc(sizeof(unsigned int));
    if(memory == NULL) {
        return (NULL);
    }
    int arr[width][height];

    for(outer = 0; outer < width; outer++) {
        for(inner = 1; inner < height; inner++) {
            arr[outer][inner] = 0;
        }
    }
}
