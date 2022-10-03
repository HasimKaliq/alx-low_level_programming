#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    if(argc - 1 < 2) {
        printf("Error");
    }
    else if(argc - 1 == 2) {
        for(i = 1; i < argc-1; i++) {
            int multiplaction = atoi(argv[i]) * atoi(argv[i+1]);
            printf("%d\n", multiplaction);
        }
    }
    return (0);
}
